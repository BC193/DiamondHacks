#include <string>

class User {
    private:
        int user_Id;
        std::string username;

    public:
        // Constructor
        User(int id, const std::string& name) : user_Id(id), username(name) {}

        // Destructor (if needed)
        ~User() {}

        // Accessor functions
        int getUserId() const {
            return user_Id;
        }

        std::string getUsername() const {
            return username;
        }

        // Mutator functions (optional)
        void setUserId(int id) {
            user_Id = id;
        }

        void setUsername(const std::string& name) {
            username = name;
        }
};
