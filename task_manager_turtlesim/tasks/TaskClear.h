#ifndef TASK_CLEAR_H
#define TASK_CLEAR_H

#include "task_manager_lib/MinimalTaskConfig.h"
#include "task_manager_lib/TaskDefinition.h"
#include "task_manager_turtlesim/TurtleSimEnv.h"
using namespace task_manager_lib;

namespace task_manager_turtlesim {
    class TaskClear : public TaskDefinitionWithConfig<MinimalTaskConfig,TaskClear>
    {
        protected:
            boost::shared_ptr<TurtleSimEnv> env;
        public:
            TaskClear(boost::shared_ptr<TaskEnvironment> env); 
            virtual ~TaskClear() {};

            virtual TaskIndicator iterate();

            virtual boost::shared_ptr<TaskDefinition> getInstance() {
                return shared_from_this();
            }
    };
};

#endif // TASK_CLEAR_H
