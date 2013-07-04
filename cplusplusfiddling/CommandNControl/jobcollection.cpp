#include "job.h"
#include <list>
#include <string>

using namespace::std;

class JobCollection
{
    private:
        list<Job> jobs;

    public:
        JobCollection(){}

        ~JobCollection()
        {

            jobs.clear();
        }

        void addJob(Job* job)
        {
            list.insert(job);
        }

        void removeJob(int slot)
        {
            list.erase(slot);
        }

        Job operator[] (int slot)
        {
            return *(jobs.begin() + slot);
        }

        uint size()
        {
            return jobs.size();
        }

};
