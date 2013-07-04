#include <iostream>
#include "job.h"
#include "jobcollection.h"
#include "string"
#include "list"
#include "algorithm"

using namespace std;

int main()
{
    JobCollection *jobList = new JobCollection;
    Job *job = new Job;

    jobList->addJob(*job);

    for( auto job : jobList)
    {
        cout << job->getName() << job->getTags() << job->getType() << "\n";
    }


    cout << "Hello World!" << endl;
    return 0;
}

