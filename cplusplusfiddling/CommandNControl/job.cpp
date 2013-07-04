#include "jobcollection.h"
#include "string"
using namespace::std;

class Job
{
    private:
        JobCollection *jobs;
        string type, name, tags;

    public:
        Job(string _type, string _name, string _tags)
        {
            type = _type;
            name = _name;
            tags = _tags;
        }

       JobCollection* getCollection(){ return collection; }

       string getType() { return *type; }

       string getName(){ return *name; }

       string getTags() { return *tags; }

       void setType(string *_type) { type = *_type; }

       void setName(string *_name) { name = *_name; }

       void setTags(string *_tags) { tags = *_tags; }
};
