#include <iostream>
#include <vector>
#include <string>
#include <limits> 

struct Task {
    std::string description;
    bool completed;
};

int main() {
    std::vector<Task> tasks;
    char choice;
    do {
        std::cout << "\nChoose an option:\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Mark Task as Completed\n";
        std::cout << "4. Remove Task\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        switch (choice) {
            case '1': {
                Task newTask;
                std::cout << "Enter task description: ";
                std::getline(std::cin, newTask.description);
                newTask.completed = false;
                tasks.push_back(newTask);
                std::cout << "Task added successfully.\n";
                break;
            }
            case '2': {
                if (tasks.empty()) {
                    std::cout << "No tasks available.\n";
                } else {
                    std::cout << "Tasks:\n";
                    for (size_t i = 0; i < tasks.size(); ++i) {
                        std::cout << i + 1 << ". ";
                        if (tasks[i].completed) {
                            std::cout << "[X] ";
                        } else {
                            std::cout << "[ ] ";
                        }
                        std::cout << tasks[i].description << std::endl;
                    }
                }
                break;
            }
            case '3': {
                if (tasks.empty()) {
                    std::cout << "No tasks available.\n";
                } else {
                    std::cout << "Enter the number of the task to mark as completed: ";
                    size_t index;
                    std::cin >> index;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    if (index >= 1 && index <= tasks.size()) {
                        tasks[index - 1].completed = true;
                        std::cout << "Task marked as completed.\n";
                    } else {
                        std::cout << "Invalid task number.\n";
                    }
                }
                break;
            }
            case '4': {
                if (tasks.empty()) {
                    std::cout << "No tasks available.\n";
                } else {
                    std::cout << "Enter the number of the task to remove: ";
                    size_t index;
                    std::cin >> index;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    if (index >= 1 && index <= tasks.size()) {
                        tasks.erase(tasks.begin() + index - 1);
                        std::cout << "Task removed.\n";
                    } else {
                        std::cout << "Invalid task number.\n";
                    }
                }
                break;
            }
            case '5':
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != '5');

    return 0;
}
