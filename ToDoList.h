#pragma once
class ToDoList
{
    private:
        string name;
        vector<Task> tasks;
        string PriorityToString(Priority priority) {
            switch (priority) {
                case 0 : return "RANDOM" ;
                case 1 : return "LOW" ;
                case 2 : return "MEDIUM" ;
                case 3 : return "HIGH" ;
                default : return "RANDOM" ;
            }    
        }
    public:
        ToDoList(): name("untitled") , tasks(vector<Task> ()) {}
        ToDoList(string name, vector<Task> task): name(name), tasks(task) {}
        string getName() {
            return name;
        }
        vector<Task> getTask() {
            return tasks;
        }
        bool setName(string name) {
            if (name == "") return false;

            this->name = name;
            return true;
        }
        bool setTasks(vector<Task> tasks){
            if(tasks.size() == 0) return false;
            
            for(int i=0; i<tasks.size(); i++){
                if(tasks[i].getName() == "" && tasks[i].getPriority() == RANDOM) {
                    tasks.erase(tasks.begin() + i);
                    continue;
                };
            }

            this->tasks = tasks;
            return true;
        }
        bool addTask(Task task){
            if(task.getName() == "" && task.getPriority() == RANDOM) return false;

            for(Task dbTask : tasks) if(task.getName() == dbTask.getName()) return false;
            
            tasks.push_back(task);
            return true;
        }
        bool deleteTask(string name){
            if(name == "") return false;

            for(int i = 0 ; i < tasks.size() ; i++ ){
                if(tasks[i].getName() == name) {
                    tasks.erase(tasks.begin() + i);
                    return true;
                }
            }

            return false;
        }
        bool editTask(string name, Task task) {
            if(name == "") return false;
            if(task.getName() == "" && task.getPriority() == RANDOM) return false;

            for(int i = 0 ; i < tasks.size() ; i++ ){
                if(tasks[i].getName() == name) {
                    tasks[i].setName(task.getName());
                    tasks[i].setDescription(task.getDescription());
                    tasks[i].setPriority(task.getPriority());
                    return true;
                }
            }
            
            return false;
        }
        void showData(){
            int i = 1;
            cout << "-----------------------------" << endl;
            cout << "ToDoList name : " << name << endl;
            for(Task dbTask : tasks) {
                cout << "Task " << i << " name : " << dbTask.getName() << endl;
                if(dbTask.getDescription() != "") cout << "Task " << i << " Description : " << dbTask.getDescription() << endl;
                cout << "Task " << i << " Priority : " <<  PriorityToString(dbTask.getPriority()) << endl;
                cout << "Task " << i << " Priority : " <<  PriorityToString(dbTask.getPriority()) << endl;
                cout << "Task " << i << " Priority : " <<  PriorityToString(dbTask.getPriority()) << endl;
                cout << "-----------------------------" << endl;
            }
        }
};
