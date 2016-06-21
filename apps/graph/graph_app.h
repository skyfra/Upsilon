#ifndef GRAPH_GRAPH_APP_H
#define GRAPH_GRAPH_APP_H

#include <escher.h>
#include "graph/graph_controller.h"
#include "list/list_controller.h"

class GraphApp : public App {
public:
  GraphApp();
protected:
  ViewController * rootViewController() override;
private:
  ListController m_listController;
  GraphController m_graphController;
  TabViewController m_tabViewController;
};

#endif
