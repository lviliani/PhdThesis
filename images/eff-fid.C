{
//=========Macro generated from canvas: c1_n3/c1_n3
//=========  (Thu Oct 13 17:26:06 2016) by ROOT version5.34/03
   TCanvas *c1_n3 = new TCanvas("c1_n3", "c1_n3",842,103,700,500);
   c1_n3->Range(-25.025,-1.125,225.225,0.125);
   c1_n3->SetFillColor(0);
   c1_n3->SetBorderMode(0);
   c1_n3->SetBorderSize(2);
   c1_n3->SetLogy();
   c1_n3->SetTicky(1);
   c1_n3->SetFrameBorderMode(0);
   c1_n3->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6);
   grae->SetName("eff_sel");
   grae->SetTitle("Efficiency Composition");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(3);
   grae->SetPoint(0,7.5,0.289689);
   grae->SetPointError(0,7.5,7.5,0.004140337,0.004140337);
   grae->SetPoint(1,30,0.2632492);
   grae->SetPointError(1,15,15,0.003179031,0.003179031);
   grae->SetPoint(2,65,0.2407445);
   grae->SetPointError(2,20,20,0.004291887,0.004291887);
   grae->SetPoint(3,105,0.2259216);
   grae->SetPointError(3,20,20,0.006503537,0.006503537);
   grae->SetPoint(4,145,0.2030435);
   grae->SetPointError(4,20,20,0.008961076,0.008961076);
   grae->SetPoint(5,182.5,0.1764867);
   grae->SetPointError(5,17.5,17.5,0.008729665,0.008729665);
   
   TH1F *Graph_eff_sel5 = new TH1F("Graph_eff_sel5","Efficiency Composition",100,0,220);
   Graph_eff_sel5->SetMinimum(0.1);
   Graph_eff_sel5->SetMaximum(1);
   Graph_eff_sel5->SetDirectory(0);
   Graph_eff_sel5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_eff_sel5->SetLineColor(ci);
   Graph_eff_sel5->GetXaxis()->SetTitle("p_{T,gen}^{H} (GeV)");
   Graph_eff_sel5->GetXaxis()->SetRange(1,91);
   Graph_eff_sel5->GetXaxis()->SetLabelFont(42);
   Graph_eff_sel5->GetXaxis()->SetLabelSize(0.035);
   Graph_eff_sel5->GetXaxis()->SetTitleSize(0.035);
   Graph_eff_sel5->GetXaxis()->SetTitleFont(42);
   Graph_eff_sel5->GetYaxis()->SetTitle("Efficiency");
   Graph_eff_sel5->GetYaxis()->SetLabelFont(42);
   Graph_eff_sel5->GetYaxis()->SetLabelSize(0.035);
   Graph_eff_sel5->GetYaxis()->SetTitleSize(0.035);
   Graph_eff_sel5->GetYaxis()->SetTitleFont(42);
   Graph_eff_sel5->GetZaxis()->SetLabelFont(42);
   Graph_eff_sel5->GetZaxis()->SetLabelSize(0.035);
   Graph_eff_sel5->GetZaxis()->SetTitleSize(0.035);
   Graph_eff_sel5->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_eff_sel5);
   
   grae->Draw("ap");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("divide_hpass1_by_htot1");
   grae->SetTitle("hpass1");

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(3);
   grae->SetPoint(0,7.5,0.3126815);
   grae->SetPointError(0,7.5,7.5,0.004395632,0.004395632);
   grae->SetPoint(1,30,0.2847107);
   grae->SetPointError(1,15,15,0.00338811,0.00338811);
   grae->SetPoint(2,65,0.2596056);
   grae->SetPointError(2,20,20,0.0045693,0.0045693);
   grae->SetPoint(3,105,0.2447654);
   grae->SetPointError(3,20,20,0.006956303,0.006956303);
   grae->SetPoint(4,145,0.2186196);
   grae->SetPointError(4,20,20,0.009559413,0.009559413);
   grae->SetPoint(5,182.5,0.1902849);
   grae->SetPointError(5,17.5,17.5,0.009347735,0.009347735);
   
   TH1F *Graph_divide_hpass1_by_htot16 = new TH1F("Graph_divide_hpass1_by_htot16","hpass1",100,0,220);
   Graph_divide_hpass1_by_htot16->SetMinimum(0.1673232);
   Graph_divide_hpass1_by_htot16->SetMaximum(0.3306911);
   Graph_divide_hpass1_by_htot16->SetDirectory(0);
   Graph_divide_hpass1_by_htot16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_divide_hpass1_by_htot16->SetLineColor(ci);
   Graph_divide_hpass1_by_htot16->GetXaxis()->SetLabelFont(42);
   Graph_divide_hpass1_by_htot16->GetXaxis()->SetLabelSize(0.035);
   Graph_divide_hpass1_by_htot16->GetXaxis()->SetTitleSize(0.035);
   Graph_divide_hpass1_by_htot16->GetXaxis()->SetTitleFont(42);
   Graph_divide_hpass1_by_htot16->GetYaxis()->SetLabelFont(42);
   Graph_divide_hpass1_by_htot16->GetYaxis()->SetLabelSize(0.035);
   Graph_divide_hpass1_by_htot16->GetYaxis()->SetTitleSize(0.035);
   Graph_divide_hpass1_by_htot16->GetYaxis()->SetTitleFont(42);
   Graph_divide_hpass1_by_htot16->GetZaxis()->SetLabelFont(42);
   Graph_divide_hpass1_by_htot16->GetZaxis()->SetLabelSize(0.035);
   Graph_divide_hpass1_by_htot16->GetZaxis()->SetTitleSize(0.035);
   Graph_divide_hpass1_by_htot16->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_divide_hpass1_by_htot16);
   
   grae->Draw("p");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("divide_hpass2_by_htot2");
   grae->SetTitle("hpass2");

   ci = TColor::GetColor("#00ff00");
   grae->SetLineColor(ci);
   grae->SetLineWidth(3);
   grae->SetPoint(0,7.5,0.3792847);
   grae->SetPointError(0,7.5,7.5,0.005061772,0.005061772);
   grae->SetPoint(1,30,0.3465334);
   grae->SetPointError(1,15,15,0.003935674,0.003935674);
   grae->SetPoint(2,65,0.3060652);
   grae->SetPointError(2,20,20,0.005210793,0.005210793);
   grae->SetPoint(3,105,0.2695254);
   grae->SetPointError(3,20,20,0.007525623,0.007525623);
   grae->SetPoint(4,145,0.2309136);
   grae->SetPointError(4,20,20,0.01002198,0.01002198);
   grae->SetPoint(5,182.5,0.194493);
   grae->SetPointError(5,17.5,17.5,0.009528982,0.009528982);
   
   TH1F *Graph_divide_hpass2_by_htot27 = new TH1F("Graph_divide_hpass2_by_htot27","hpass2",100,0,220);
   Graph_divide_hpass2_by_htot27->SetMinimum(0.1650258);
   Graph_divide_hpass2_by_htot27->SetMaximum(0.4042847);
   Graph_divide_hpass2_by_htot27->SetDirectory(0);
   Graph_divide_hpass2_by_htot27->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_divide_hpass2_by_htot27->SetLineColor(ci);
   Graph_divide_hpass2_by_htot27->GetXaxis()->SetLabelFont(42);
   Graph_divide_hpass2_by_htot27->GetXaxis()->SetLabelSize(0.035);
   Graph_divide_hpass2_by_htot27->GetXaxis()->SetTitleSize(0.035);
   Graph_divide_hpass2_by_htot27->GetXaxis()->SetTitleFont(42);
   Graph_divide_hpass2_by_htot27->GetYaxis()->SetLabelFont(42);
   Graph_divide_hpass2_by_htot27->GetYaxis()->SetLabelSize(0.035);
   Graph_divide_hpass2_by_htot27->GetYaxis()->SetTitleSize(0.035);
   Graph_divide_hpass2_by_htot27->GetYaxis()->SetTitleFont(42);
   Graph_divide_hpass2_by_htot27->GetZaxis()->SetLabelFont(42);
   Graph_divide_hpass2_by_htot27->GetZaxis()->SetLabelSize(0.035);
   Graph_divide_hpass2_by_htot27->GetZaxis()->SetTitleSize(0.035);
   Graph_divide_hpass2_by_htot27->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_divide_hpass2_by_htot27);
   
   grae->Draw("p");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("divide_hpass4_by_htot4");
   grae->SetTitle("hpass4");
   grae->SetLineColor(6);
   grae->SetLineWidth(3);
   grae->SetPoint(0,7.5,0.3861387);
   grae->SetPointError(0,7.5,7.5,0.005159477,0.005159477);
   grae->SetPoint(1,30,0.3749795);
   grae->SetPointError(1,15,15,0.004234712,0.004234712);
   grae->SetPoint(2,64.86365,0.3705578);
   grae->SetPointError(2,20,20,0.006386314,0.006386314);
   grae->SetPoint(3,105,0.370407);
   grae->SetPointError(3,20,20,0.01050993,0.01050993);
   grae->SetPoint(4,145,0.3473742);
   grae->SetPointError(4,20,20,0.01574046,0.01574046);
   grae->SetPoint(5,182.5,0.3344564);
   grae->SetPointError(5,17.5,17.5,0.01625195,0.01625195);
   
   TH1F *Graph_divide_hpass4_by_htot48 = new TH1F("Graph_divide_hpass4_by_htot48","hpass4",100,0,220);
   Graph_divide_hpass4_by_htot48->SetMinimum(0.3108951);
   Graph_divide_hpass4_by_htot48->SetMaximum(0.3986075);
   Graph_divide_hpass4_by_htot48->SetDirectory(0);
   Graph_divide_hpass4_by_htot48->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_divide_hpass4_by_htot48->SetLineColor(ci);
   Graph_divide_hpass4_by_htot48->GetXaxis()->SetLabelFont(42);
   Graph_divide_hpass4_by_htot48->GetXaxis()->SetLabelSize(0.035);
   Graph_divide_hpass4_by_htot48->GetXaxis()->SetTitleSize(0.035);
   Graph_divide_hpass4_by_htot48->GetXaxis()->SetTitleFont(42);
   Graph_divide_hpass4_by_htot48->GetYaxis()->SetLabelFont(42);
   Graph_divide_hpass4_by_htot48->GetYaxis()->SetLabelSize(0.035);
   Graph_divide_hpass4_by_htot48->GetYaxis()->SetTitleSize(0.035);
   Graph_divide_hpass4_by_htot48->GetYaxis()->SetTitleFont(42);
   Graph_divide_hpass4_by_htot48->GetZaxis()->SetLabelFont(42);
   Graph_divide_hpass4_by_htot48->GetZaxis()->SetLabelSize(0.035);
   Graph_divide_hpass4_by_htot48->GetZaxis()->SetTitleSize(0.035);
   Graph_divide_hpass4_by_htot48->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_divide_hpass4_by_htot48);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.1178161,0.6122881,0.4899425,0.8855932,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("eff_sel","Lepton cuts","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("divide_hpass1_by_htot1","Lepton + m_{ll} cuts","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("divide_hpass2_by_htot2","Lepton + m_{ll} + p_{T}^{ll} cuts","lp");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("divide_hpass4_by_htot4","Lepton + m_{ll} + p_{T}^{ll} + m_{T}^{H} cuts","lp");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.298908,0.9339831,0.701092,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Efficiency Composition");
   pt->Draw();
   c1_n3->Modified();
   c1_n3->cd();
   c1_n3->SetSelected(c1_n3);
}
