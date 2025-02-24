void MainMenu() {
  int choice = 0;
  vector<ToDoList> lists;
  cout << "------------- ToDoList Creator -------------" << endl;
  cout << " Choose an option : " << endl;
  cout << " 1 - Create ToDoList." << endl;
  cout << " 2 - Show ToDoList." << endl;
  cout << " 3 - Search ToDoList." << endl;
  cout << " 4 - Delete ToDoList." << endl;
  cout << " 5 - Clear ToDoList." << endl;
  cout << " 5 - Exit ToDoList App." << endl;
  cout << "choice : ";
  cin >> choice;
  cin.ignore();

  switch (choice) {
  case 1: {
    cout << "ToDoList Creation :" << endl;
    ToDoList TDL;
    string name, decision;
    cout << "Enter Name : ";
    getline(cin, name);
    TDL.setName(name);
    cout << "Do you want to add a task to your ToDoList (y/n): ";
    getline(cin, decision);
    if (decision == "y") {
      cout << "yesssssss";
    } else
      cout << "nooooo";
    lists.push_back(TDL);
    MainMenu();
    break;
  }
  case 2: {
    cout << "ToDoList Show :" << endl;
    for (int i = 0; i < lists.size(); i++) {
      cout << i + 1 << " - " << lists[i].getName() << endl;
    }
    MainMenu();
    break;
  }
  case 3: {
    cout << "ToDoList Search :" << endl;
    int choiceS = 0;
    cout << "------------- ToDoList Search -------------" << endl;
    cout << " Choose an option : " << endl;
    cout << " 1 - Search by Name." << endl;
    cout << " 2 - Search by Task." << endl;
    cout << " 3 - Search by Priority." << endl;
    cout << " 4 - Back to Main Menu." << endl;
    cout << "choice : ";
    cin >> choiceS;
    cin.ignore();

    switch (choiceS) {
    case 1: {
      cout << "Search by Name :" << endl;
      SearchByName(lists);
      break;
    }
    case 2: {
      cout << "Search by Task :" << endl;
      SearchByTask(lists);
      break;
    }
    case 3: {
      cout << "Search by Priority :" << endl;
      SearchByPriority(lists);
      break;
    }
    case 4: {
      cout << "Back to Main Menu." << endl;
      MainMenu();
      break;
    }
    default: {
      cout << "Invalid choice." << endl;
      break;
    }
    };
    break;
  }
  case 4: {
    cout << "ToDoList Delete :" << endl;
    ToDoListDelete(lists);
    MainMenu();
    break;
  }
  case 5: {
    cout << "ToDoList Clear :" << endl;
    ToDoListClear(lists);
    MainMenu();
    break;
  }
  case 6: {
    cout << "Exiting ToDoList App." << endl;
    break;
  }
  default: {
    cout << "Invalid choice." << endl;
    MainMenu();
    break;
  }
  };
}
