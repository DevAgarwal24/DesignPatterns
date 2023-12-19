// Adapter Design Pattern is used when there are two incompatible objects
// We need to satisfy our client needs which cannot be met due to incompatibility
// Adapters helps to make things compatible

// Suppose we have some XML data and we want to analyse it
// We have a data analysis tool and we pass the data to the tool
// Problem is that the tool expects the data in JSON and not JSON
// Create an adapter in between to convert the XML data to JSON
// Client doesn't know about the adapter in between

#include <iostream>
using namespace std;

class XMLData {
    string xmlData;
public:
    XMLData(string pXmlData) : xmlData(pXmlData) {}
    string getXMLData() { return xmlData; }
};

class DataAnalyticsTool {
    string jsonData;
protected:
    void setData(string pJsonData) {
        jsonData = pJsonData;
    }
public:
    DataAnalyticsTool() {}
    DataAnalyticsTool(string pJsonData) : jsonData(pJsonData) {}
    virtual void analyseData() {
        cout << "Analysing Data: " << jsonData << endl;
    }
};

class Adapter : public DataAnalyticsTool {
    XMLData *xmlData;
public:
    Adapter(XMLData *pXMLData) : xmlData(pXMLData) {}
    void analyseData() override {
        cout << "Converting XML Data: " << xmlData->getXMLData() << " to JSON Data\n";
        setData("Sample JSON Data");
        DataAnalyticsTool::analyseData();
    }
};

class Client {
public:
    void ProcessData(DataAnalyticsTool *tool) {
        tool->analyseData();
    }
};

int main()
{
    XMLData *xmlData = new XMLData("Sample XML Data");
    //DataAnalyticsTool *tool = new DataAnalyticsTool(jsonData); // Should have used this if jsonData was available
    DataAnalyticsTool *tool = new Adapter(xmlData);
    Client *client = new Client();
    client->ProcessData(tool);

    return 0;
}