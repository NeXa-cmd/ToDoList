#pragma once
class Task {
    private:
        string name;
        string description;
        Priority priority;
    public:
        Task(): name("untitled"), description("no description"), priority(RANDOM) {}
        Task(string name, string description, Priority priority): name(name), description(description), priority(priority) {}
        string getName() {
            return name;
        }
        string getDescription() {
            return description;
        }
        Priority getPriority() {
            return priority;
        }
        bool setName(string name){
            if(name == "") return false;

            this->name = name;
            return true;
        }
        bool setDescription(string description){
            this->description = description;
            return true;
        }
        bool setPriority(Priority priority){
            if(priority == RANDOM) return false;
            
            this->priority = priority;
            return true;
        }
};