{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Thu Oct 13 17:25:37 2016) by ROOT version5.34/03
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",11,66,700,500);
   c1_n2->Range(-25.025,-1.463659,225.225,0.1626288);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetLogy();
   c1_n2->SetTicky(1);
   c1_n2->SetFrameBorderMode(0);
   c1_n2->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6);
   grae->SetName("Fake_rate");
   grae->SetTitle("Fakes Composition");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(3);
   grae->SetPoint(0,7.5,0.07420909);
   grae->SetPointError(0,7.5,7.5,0.004215357,0.004215357);
   grae->SetPoint(1,30,0.09002781);
   grae->SetPointError(1,15,15,0.003777074,0.003777074);
   grae->SetPoint(2,65,0.1352328);
   grae->SetPointError(2,20,20,0.006582818,0.006582818);
   grae->SetPoint(3,105,0.1797395);
   grae->SetPointError(3,20,20,0.01191901,0.01191901);
   grae->SetPoint(4,145,0.2101133);
   grae->SetPointError(4,20,20,0.01928091,0.01928091);
   grae->SetPoint(5,182.5,0.2303743);
   grae->SetPointError(5,17.5,17.5,0.02101337,0.02101337);
   
   TH1F *Graph_Fake_rate1 = new TH1F("Graph_Fake_rate1","Fakes Composition",100,0,220);
   Graph_Fake_rate1->SetMinimum(0.05);
   Graph_Fake_rate1->SetMaximum(1);
   Graph_Fake_rate1->SetDirectory(0);
   Graph_Fake_rate1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Fake_rate1->SetLineColor(ci);
   Graph_Fake_rate1->GetXaxis()->SetTitle("p_{T,gen}^{H} (GeV)");
   Graph_Fake_rate1->GetXaxis()->SetRange(1,91);
   Graph_Fake_rate1->GetXaxis()->SetLabelFont(42);
   Graph_Fake_rate1->GetXaxis()->SetTitleFont(42);
   Graph_Fake_rate1->GetYaxis()->SetTitle("Out-of-fiducial signal events");
   Graph_Fake_rate1->GetYaxis()->SetNdivisions(410);
   Graph_Fake_rate1->GetYaxis()->SetLabelFont(42);
   Graph_Fake_rate1->GetYaxis()->SetTitleFont(42);
   Graph_Fake_rate1->GetZaxis()->SetLabelFont(42);
   Graph_Fake_rate1->GetZaxis()->SetLabelSize(0.035);
   Graph_Fake_rate1->GetZaxis()->SetTitleSize(0.035);
   Graph_Fake_rate1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Fake_rate1);
   
   grae->Draw("ap");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("divide_hfake1_by_hsel");
   grae->SetTitle("hfake1");

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(3);
   grae->SetPoint(0,7.5,0.07518089);
   grae->SetPointError(0,7.5,7.5,0.004242056,0.004242056);
   grae->SetPoint(1,30,0.09164058);
   grae->SetPointError(1,15,15,0.003808652,0.003808652);
   grae->SetPoint(2,65,0.1361688);
   grae->SetPointError(2,20,20,0.006598794,0.006598794);
   grae->SetPoint(3,105,0.1806134);
   grae->SetPointError(3,20,20,0.01193562,0.01193562);
   grae->SetPoint(4,145,0.2101133);
   grae->SetPointError(4,20,20,0.01928091,0.01928091);
   grae->SetPoint(5,182.5,0.2338322);
   grae->SetPointError(5,17.5,17.5,0.0211368,0.0211368);
   
   TH1F *Graph_divide_hfake1_by_hsel2 = new TH1F("Graph_divide_hfake1_by_hsel2","hfake1",100,0,220);
   Graph_divide_hfake1_by_hsel2->SetMinimum(0.05253582);
   Graph_divide_hfake1_by_hsel2->SetMaximum(0.2733721);
   Graph_divide_hfake1_by_hsel2->SetDirectory(0);
   Graph_divide_hfake1_by_hsel2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_divide_hfake1_by_hsel2->SetLineColor(ci);
   Graph_divide_hfake1_by_hsel2->GetXaxis()->SetLabelFont(42);
   Graph_divide_hfake1_by_hsel2->GetXaxis()->SetLabelSize(0.035);
   Graph_divide_hfake1_by_hsel2->GetXaxis()->SetTitleSize(0.035);
   Graph_divide_hfake1_by_hsel2->GetXaxis()->SetTitleFont(42);
   Graph_divide_hfake1_by_hsel2->GetYaxis()->SetLabelFont(42);
   Graph_divide_hfake1_by_hsel2->GetYaxis()->SetLabelSize(0.035);
   Graph_divide_hfake1_by_hsel2->GetYaxis()->SetTitleSize(0.035);
   Graph_divide_hfake1_by_hsel2->GetYaxis()->SetTitleFont(42);
   Graph_divide_hfake1_by_hsel2->GetZaxis()->SetLabelFont(42);
   Graph_divide_hfake1_by_hsel2->GetZaxis()->SetLabelSize(0.035);
   Graph_divide_hfake1_by_hsel2->GetZaxis()->SetTitleSize(0.035);
   Graph_divide_hfake1_by_hsel2->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_divide_hfake1_by_hsel2);
   
   grae->Draw("p");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("divide_hfake2_by_hsel");
   grae->SetTitle("hfake2");

   ci = TColor::GetColor("#00ff00");
   grae->SetLineColor(ci);
   grae->SetLineWidth(3);
   grae->SetPoint(0,7.5,0.07705843);
   grae->SetPointError(0,7.5,7.5,0.004286524,0.004286524);
   grae->SetPoint(1,30,0.09338942);
   grae->SetPointError(1,15,15,0.0038372,0.0038372);
   grae->SetPoint(2,65,0.1391004);
   grae->SetPointError(2,20,20,0.006656816,0.006656816);
   grae->SetPoint(3,105,0.1807551);
   grae->SetPointError(3,20,20,0.01193576,0.01193576);
   grae->SetPoint(4,145,0.2101133);
   grae->SetPointError(4,20,20,0.01928091,0.01928091);
   grae->SetPoint(5,182.5,0.2338322);
   grae->SetPointError(5,17.5,17.5,0.0211368,0.0211368);
   
   TH1F *Graph_divide_hfake2_by_hsel3 = new TH1F("Graph_divide_hfake2_by_hsel3","hfake2",100,0,220);
   Graph_divide_hfake2_by_hsel3->SetMinimum(0.05455219);
   Graph_divide_hfake2_by_hsel3->SetMaximum(0.2731888);
   Graph_divide_hfake2_by_hsel3->SetDirectory(0);
   Graph_divide_hfake2_by_hsel3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_divide_hfake2_by_hsel3->SetLineColor(ci);
   Graph_divide_hfake2_by_hsel3->GetXaxis()->SetLabelFont(42);
   Graph_divide_hfake2_by_hsel3->GetXaxis()->SetLabelSize(0.035);
   Graph_divide_hfake2_by_hsel3->GetXaxis()->SetTitleSize(0.035);
   Graph_divide_hfake2_by_hsel3->GetXaxis()->SetTitleFont(42);
   Graph_divide_hfake2_by_hsel3->GetYaxis()->SetLabelFont(42);
   Graph_divide_hfake2_by_hsel3->GetYaxis()->SetLabelSize(0.035);
   Graph_divide_hfake2_by_hsel3->GetYaxis()->SetTitleSize(0.035);
   Graph_divide_hfake2_by_hsel3->GetYaxis()->SetTitleFont(42);
   Graph_divide_hfake2_by_hsel3->GetZaxis()->SetLabelFont(42);
   Graph_divide_hfake2_by_hsel3->GetZaxis()->SetLabelSize(0.035);
   Graph_divide_hfake2_by_hsel3->GetZaxis()->SetTitleSize(0.035);
   Graph_divide_hfake2_by_hsel3->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_divide_hfake2_by_hsel3);
   
   grae->Draw("p");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("divide_hfake4_by_hsel");
   grae->SetTitle("hfake4");
   grae->SetLineColor(6);
   grae->SetLineWidth(3);
   grae->SetPoint(0,7.5,0.08984961);
   grae->SetPointError(0,7.5,7.5,0.004609788,0.004609788);
   grae->SetPoint(1,30,0.1243101);
   grae->SetPointError(1,15,15,0.004357703,0.004357703);
   grae->SetPoint(2,65,0.2448201);
   grae->SetPointError(2,20,20,0.008279991,0.008279991);
   grae->SetPoint(3,105,0.3221023);
   grae->SetPointError(3,20,20,0.01419091,0.01419091);
   grae->SetPoint(4,144.6848,0.3958793);
   grae->SetPointError(4,20,20,0.02224429,0.02224429);
   grae->SetPoint(5,182.5,0.3584204);
   grae->SetPointError(5,17.5,17.5,0.02339033,0.02339033);
   
   TH1F *Graph_divide_hfake4_by_hsel4 = new TH1F("Graph_divide_hfake4_by_hsel4","hfake4",100,0,220);
   Graph_divide_hfake4_by_hsel4->SetMinimum(0.0522325);
   Graph_divide_hfake4_by_hsel4->SetMaximum(0.4483203);
   Graph_divide_hfake4_by_hsel4->SetDirectory(0);
   Graph_divide_hfake4_by_hsel4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_divide_hfake4_by_hsel4->SetLineColor(ci);
   Graph_divide_hfake4_by_hsel4->GetXaxis()->SetLabelFont(42);
   Graph_divide_hfake4_by_hsel4->GetXaxis()->SetLabelSize(0.035);
   Graph_divide_hfake4_by_hsel4->GetXaxis()->SetTitleSize(0.035);
   Graph_divide_hfake4_by_hsel4->GetXaxis()->SetTitleFont(42);
   Graph_divide_hfake4_by_hsel4->GetYaxis()->SetLabelFont(42);
   Graph_divide_hfake4_by_hsel4->GetYaxis()->SetLabelSize(0.035);
   Graph_divide_hfake4_by_hsel4->GetYaxis()->SetTitleSize(0.035);
   Graph_divide_hfake4_by_hsel4->GetYaxis()->SetTitleFont(42);
   Graph_divide_hfake4_by_hsel4->GetZaxis()->SetLabelFont(42);
   Graph_divide_hfake4_by_hsel4->GetZaxis()->SetLabelSize(0.035);
   Graph_divide_hfake4_by_hsel4->GetZaxis()->SetTitleSize(0.035);
   Graph_divide_hfake4_by_hsel4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_divide_hfake4_by_hsel4);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.1278736,0.625,0.4899425,0.8813559,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Fake_rate","Lepton cuts","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("divide_hfake1_by_hsel","Lepton + m_{ll} cuts","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("divide_hfake2_by_hsel","Lepton + m_{ll} + p_{T}^{ll} cuts","lp");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("divide_hfake4_by_hsel","Lepton + m_{ll} + p_{T}^{ll} + m_{T}^{H} cuts","lp");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.331954,0.9365254,0.668046,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Fakes Composition");
   pt->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
