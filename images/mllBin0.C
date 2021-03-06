{
//=========Macro generated from canvas: mll/mll
//=========  (Wed Jun 24 14:58:04 2015) by ROOT version5.34/03
   TCanvas *mll = new TCanvas("mll", "mll",1366,52,550,660);
   gStyle->SetOptStat(0);
   mll->Range(0,0,1,1);
   mll->SetFillColor(0);
   mll->SetBorderMode(0);
   mll->SetBorderSize(10);
   mll->SetTickx(1);
   mll->SetTicky(1);
   mll->SetLeftMargin(0.18);
   mll->SetRightMargin(0.05);
   mll->SetTopMargin(0.08);
   mll->SetBottomMargin(0.2);
   mll->SetFrameFillStyle(0);
   mll->SetFrameLineStyle(0);
   mll->SetFrameLineWidth(2);
   mll->SetFrameBorderMode(0);
   mll->SetFrameBorderSize(10);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.2853904,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-31.94805,-23.20689,212.2078,905.0688);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(10);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.18);
   pad1->SetRightMargin(0.05);
   pad1->SetBottomMargin(0.025);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameLineStyle(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderSize(10);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameLineStyle(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderSize(10);
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   ->SetMaximum(775.0124);
   
   TH1F *_stack_1 = new TH1F("_stack_1","",9,12,200);
   _stack_1->SetMinimum(0);
   _stack_1->SetMaximum(813.763);
   _stack_1->SetDirectory(0);
   _stack_1->SetStats(0);
   _stack_1->SetFillStyle(1);
   _stack_1->SetLineStyle(0);
   _stack_1->GetXaxis()->SetTitle("mll [GeV]");
   _stack_1->GetXaxis()->SetNdivisions(505);
   _stack_1->GetXaxis()->SetLabelFont(44);
   _stack_1->GetXaxis()->SetLabelOffset(0.01);
   _stack_1->GetXaxis()->SetLabelSize(0);
   _stack_1->GetXaxis()->SetTitleSize(30.10888);
   _stack_1->GetXaxis()->SetTitleOffset(3.9);
   _stack_1->GetXaxis()->SetTitleFont(44);
   _stack_1->GetYaxis()->SetTitle("Events / bin");
   _stack_1->GetYaxis()->SetNdivisions(505);
   _stack_1->GetYaxis()->SetLabelFont(44);
   _stack_1->GetYaxis()->SetLabelOffset(0.01);
   _stack_1->GetYaxis()->SetLabelSize(30.10888);
   _stack_1->GetYaxis()->SetTitleSize(30.10888);
   _stack_1->GetYaxis()->SetTitleOffset(1.9);
   _stack_1->GetYaxis()->SetTitleFont(44);
   _stack_1->GetZaxis()->SetNdivisions(505);
   _stack_1->GetZaxis()->SetLabelFont(42);
   _stack_1->GetZaxis()->SetLabelOffset(0.015);
   _stack_1->GetZaxis()->SetLabelSize(0.05);
   _stack_1->GetZaxis()->SetTitleSize(0.05);
   _stack_1->GetZaxis()->SetTitleFont(42);
   ->SetHistogram(_stack_1);
   
   Double_t xAxis1[10] = {12, 30, 45, 60, 75, 100, 125, 150, 175, 200}; 
   
   TH1D *edge_histo_VV_new = new TH1D("edge_histo_VV_new","VV",9, xAxis1);
   edge_histo_VV_new->SetBinContent(1,3.8348);
   edge_histo_VV_new->SetBinContent(2,4.809587);
   edge_histo_VV_new->SetBinContent(3,5.71138);
   edge_histo_VV_new->SetBinContent(4,5.40105);
   edge_histo_VV_new->SetBinContent(5,6.005988);
   edge_histo_VV_new->SetBinContent(6,3.838352);
   edge_histo_VV_new->SetBinContent(7,2.443916);
   edge_histo_VV_new->SetBinContent(8,1.482191);
   edge_histo_VV_new->SetBinContent(9,1.066487);
   edge_histo_VV_new->SetEntries(9);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#3366ff");
   edge_histo_VV_new->SetFillColor(ci);

   ci = TColor::GetColor("#0033cc");
   edge_histo_VV_new->SetLineColor(ci);
   edge_histo_VV_new->SetLineStyle(0);
   edge_histo_VV_new->GetXaxis()->SetNdivisions(505);
   edge_histo_VV_new->GetXaxis()->SetLabelFont(42);
   edge_histo_VV_new->GetXaxis()->SetLabelOffset(0.015);
   edge_histo_VV_new->GetXaxis()->SetLabelSize(0.05);
   edge_histo_VV_new->GetXaxis()->SetTitleSize(0.05);
   edge_histo_VV_new->GetXaxis()->SetTitleOffset(1.4);
   edge_histo_VV_new->GetXaxis()->SetTitleFont(42);
   edge_histo_VV_new->GetYaxis()->SetNdivisions(505);
   edge_histo_VV_new->GetYaxis()->SetLabelFont(42);
   edge_histo_VV_new->GetYaxis()->SetLabelOffset(0.015);
   edge_histo_VV_new->GetYaxis()->SetLabelSize(0.05);
   edge_histo_VV_new->GetYaxis()->SetTitleSize(0.05);
   edge_histo_VV_new->GetYaxis()->SetTitleOffset(1.2);
   edge_histo_VV_new->GetYaxis()->SetTitleFont(42);
   edge_histo_VV_new->GetZaxis()->SetNdivisions(505);
   edge_histo_VV_new->GetZaxis()->SetLabelFont(42);
   edge_histo_VV_new->GetZaxis()->SetLabelOffset(0.015);
   edge_histo_VV_new->GetZaxis()->SetLabelSize(0.05);
   edge_histo_VV_new->GetZaxis()->SetTitleSize(0.05);
   edge_histo_VV_new->GetZaxis()->SetTitleFont(42);
   ->Add(edge_histo_VV_new,"");
   Double_t xAxis2[10] = {12, 30, 45, 60, 75, 100, 125, 150, 175, 200}; 
   
   TH1D *edge_histo_WJet_new = new TH1D("edge_histo_WJet_new","WJet",9, xAxis2);
   edge_histo_WJet_new->SetBinContent(1,28.59072);
   edge_histo_WJet_new->SetBinContent(2,40.49667);
   edge_histo_WJet_new->SetBinContent(3,38.2449);
   edge_histo_WJet_new->SetBinContent(4,28.29934);
   edge_histo_WJet_new->SetBinContent(5,29.75749);
   edge_histo_WJet_new->SetBinContent(6,13.48244);
   edge_histo_WJet_new->SetBinContent(7,4.298728);
   edge_histo_WJet_new->SetBinContent(8,3.122125);
   edge_histo_WJet_new->SetBinContent(9,3.771763);
   edge_histo_WJet_new->SetEntries(9);

   ci = TColor::GetColor("#999999");
   edge_histo_WJet_new->SetFillColor(ci);

   ci = TColor::GetColor("#666666");
   edge_histo_WJet_new->SetLineColor(ci);
   edge_histo_WJet_new->SetLineStyle(0);
   edge_histo_WJet_new->GetXaxis()->SetNdivisions(505);
   edge_histo_WJet_new->GetXaxis()->SetLabelFont(42);
   edge_histo_WJet_new->GetXaxis()->SetLabelOffset(0.015);
   edge_histo_WJet_new->GetXaxis()->SetLabelSize(0.05);
   edge_histo_WJet_new->GetXaxis()->SetTitleSize(0.05);
   edge_histo_WJet_new->GetXaxis()->SetTitleOffset(1.4);
   edge_histo_WJet_new->GetXaxis()->SetTitleFont(42);
   edge_histo_WJet_new->GetYaxis()->SetNdivisions(505);
   edge_histo_WJet_new->GetYaxis()->SetLabelFont(42);
   edge_histo_WJet_new->GetYaxis()->SetLabelOffset(0.015);
   edge_histo_WJet_new->GetYaxis()->SetLabelSize(0.05);
   edge_histo_WJet_new->GetYaxis()->SetTitleSize(0.05);
   edge_histo_WJet_new->GetYaxis()->SetTitleOffset(1.2);
   edge_histo_WJet_new->GetYaxis()->SetTitleFont(42);
   edge_histo_WJet_new->GetZaxis()->SetNdivisions(505);
   edge_histo_WJet_new->GetZaxis()->SetLabelFont(42);
   edge_histo_WJet_new->GetZaxis()->SetLabelOffset(0.015);
   edge_histo_WJet_new->GetZaxis()->SetLabelSize(0.05);
   edge_histo_WJet_new->GetZaxis()->SetTitleSize(0.05);
   edge_histo_WJet_new->GetZaxis()->SetTitleFont(42);
   ->Add(edge_histo_WJet_new,"");
   Double_t xAxis3[10] = {12, 30, 45, 60, 75, 100, 125, 150, 175, 200}; 
   
   TH1D *edge_histo_Vg_new = new TH1D("edge_histo_Vg_new","Vg",9, xAxis3);
   edge_histo_Vg_new->SetBinContent(1,11.04599);
   edge_histo_Vg_new->SetBinContent(2,5.382227);
   edge_histo_Vg_new->SetBinContent(3,3.163555);
   edge_histo_Vg_new->SetBinContent(4,2.81942);
   edge_histo_Vg_new->SetBinContent(5,2.921409);
   edge_histo_Vg_new->SetBinContent(6,1.556653);
   edge_histo_Vg_new->SetBinContent(7,0.8963643);
   edge_histo_Vg_new->SetBinContent(8,0.5158442);
   edge_histo_Vg_new->SetBinContent(9,0.511231);
   edge_histo_Vg_new->SetEntries(9);

   ci = TColor::GetColor("#cc00cc");
   edge_histo_Vg_new->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   edge_histo_Vg_new->SetLineColor(ci);
   edge_histo_Vg_new->SetLineStyle(0);
   edge_histo_Vg_new->GetXaxis()->SetNdivisions(505);
   edge_histo_Vg_new->GetXaxis()->SetLabelFont(42);
   edge_histo_Vg_new->GetXaxis()->SetLabelOffset(0.015);
   edge_histo_Vg_new->GetXaxis()->SetLabelSize(0.05);
   edge_histo_Vg_new->GetXaxis()->SetTitleSize(0.05);
   edge_histo_Vg_new->GetXaxis()->SetTitleOffset(1.4);
   edge_histo_Vg_new->GetXaxis()->SetTitleFont(42);
   edge_histo_Vg_new->GetYaxis()->SetNdivisions(505);
   edge_histo_Vg_new->GetYaxis()->SetLabelFont(42);
   edge_histo_Vg_new->GetYaxis()->SetLabelOffset(0.015);
   edge_histo_Vg_new->GetYaxis()->SetLabelSize(0.05);
   edge_histo_Vg_new->GetYaxis()->SetTitleSize(0.05);
   edge_histo_Vg_new->GetYaxis()->SetTitleOffset(1.2);
   edge_histo_Vg_new->GetYaxis()->SetTitleFont(42);
   edge_histo_Vg_new->GetZaxis()->SetNdivisions(505);
   edge_histo_Vg_new->GetZaxis()->SetLabelFont(42);
   edge_histo_Vg_new->GetZaxis()->SetLabelOffset(0.015);
   edge_histo_Vg_new->GetZaxis()->SetLabelSize(0.05);
   edge_histo_Vg_new->GetZaxis()->SetTitleSize(0.05);
   edge_histo_Vg_new->GetZaxis()->SetTitleFont(42);
   ->Add(edge_histo_Vg_new,"");
   Double_t xAxis4[10] = {12, 30, 45, 60, 75, 100, 125, 150, 175, 200}; 
   
   TH1D *edge_histo_Top0jet_new = new TH1D("edge_histo_Top0jet_new","Top0jet",9, xAxis4);
   edge_histo_Top0jet_new->SetBinContent(1,17.53458);
   edge_histo_Top0jet_new->SetBinContent(2,22.16626);
   edge_histo_Top0jet_new->SetBinContent(3,27.71795);
   edge_histo_Top0jet_new->SetBinContent(4,29.5416);
   edge_histo_Top0jet_new->SetBinContent(5,42.36716);
   edge_histo_Top0jet_new->SetBinContent(6,28.30638);
   edge_histo_Top0jet_new->SetBinContent(7,29.94266);
   edge_histo_Top0jet_new->SetBinContent(8,14.40671);
   edge_histo_Top0jet_new->SetBinContent(9,9.876349);
   edge_histo_Top0jet_new->SetEntries(9);

   ci = TColor::GetColor("#ffff00");
   edge_histo_Top0jet_new->SetFillColor(ci);

   ci = TColor::GetColor("#cccc00");
   edge_histo_Top0jet_new->SetLineColor(ci);
   edge_histo_Top0jet_new->SetLineStyle(0);
   edge_histo_Top0jet_new->GetXaxis()->SetNdivisions(505);
   edge_histo_Top0jet_new->GetXaxis()->SetLabelFont(42);
   edge_histo_Top0jet_new->GetXaxis()->SetLabelOffset(0.015);
   edge_histo_Top0jet_new->GetXaxis()->SetLabelSize(0.05);
   edge_histo_Top0jet_new->GetXaxis()->SetTitleSize(0.05);
   edge_histo_Top0jet_new->GetXaxis()->SetTitleOffset(1.4);
   edge_histo_Top0jet_new->GetXaxis()->SetTitleFont(42);
   edge_histo_Top0jet_new->GetYaxis()->SetNdivisions(505);
   edge_histo_Top0jet_new->GetYaxis()->SetLabelFont(42);
   edge_histo_Top0jet_new->GetYaxis()->SetLabelOffset(0.015);
   edge_histo_Top0jet_new->GetYaxis()->SetLabelSize(0.05);
   edge_histo_Top0jet_new->GetYaxis()->SetTitleSize(0.05);
   edge_histo_Top0jet_new->GetYaxis()->SetTitleOffset(1.2);
   edge_histo_Top0jet_new->GetYaxis()->SetTitleFont(42);
   edge_histo_Top0jet_new->GetZaxis()->SetNdivisions(505);
   edge_histo_Top0jet_new->GetZaxis()->SetLabelFont(42);
   edge_histo_Top0jet_new->GetZaxis()->SetLabelOffset(0.015);
   edge_histo_Top0jet_new->GetZaxis()->SetLabelSize(0.05);
   edge_histo_Top0jet_new->GetZaxis()->SetTitleSize(0.05);
   edge_histo_Top0jet_new->GetZaxis()->SetTitleFont(42);
   ->Add(edge_histo_Top0jet_new,"");
   Double_t xAxis5[10] = {12, 30, 45, 60, 75, 100, 125, 150, 175, 200}; 
   
   TH1D *edge_histo_DYTT_new = new TH1D("edge_histo_DYTT_new","DYTT",9, xAxis5);
   edge_histo_DYTT_new->SetBinContent(1,0.7537369);
   edge_histo_DYTT_new->SetBinContent(2,2.548009);
   edge_histo_DYTT_new->SetBinContent(3,7.949618);
   edge_histo_DYTT_new->SetBinContent(4,6.943758);
   edge_histo_DYTT_new->SetBinContent(5,2.50765);
   edge_histo_DYTT_new->SetBinContent(6,0.5476879);
   edge_histo_DYTT_new->SetBinContent(7,0.3426716);
   edge_histo_DYTT_new->SetBinContent(8,0.2173225);
   edge_histo_DYTT_new->SetBinContent(9,0.0673191);
   edge_histo_DYTT_new->SetEntries(9);

   ci = TColor::GetColor("#009900");
   edge_histo_DYTT_new->SetFillColor(ci);

   ci = TColor::GetColor("#006600");
   edge_histo_DYTT_new->SetLineColor(ci);
   edge_histo_DYTT_new->SetLineStyle(0);
   edge_histo_DYTT_new->GetXaxis()->SetNdivisions(505);
   edge_histo_DYTT_new->GetXaxis()->SetLabelFont(42);
   edge_histo_DYTT_new->GetXaxis()->SetLabelOffset(0.015);
   edge_histo_DYTT_new->GetXaxis()->SetLabelSize(0.05);
   edge_histo_DYTT_new->GetXaxis()->SetTitleSize(0.05);
   edge_histo_DYTT_new->GetXaxis()->SetTitleOffset(1.4);
   edge_histo_DYTT_new->GetXaxis()->SetTitleFont(42);
   edge_histo_DYTT_new->GetYaxis()->SetNdivisions(505);
   edge_histo_DYTT_new->GetYaxis()->SetLabelFont(42);
   edge_histo_DYTT_new->GetYaxis()->SetLabelOffset(0.015);
   edge_histo_DYTT_new->GetYaxis()->SetLabelSize(0.05);
   edge_histo_DYTT_new->GetYaxis()->SetTitleSize(0.05);
   edge_histo_DYTT_new->GetYaxis()->SetTitleOffset(1.2);
   edge_histo_DYTT_new->GetYaxis()->SetTitleFont(42);
   edge_histo_DYTT_new->GetZaxis()->SetNdivisions(505);
   edge_histo_DYTT_new->GetZaxis()->SetLabelFont(42);
   edge_histo_DYTT_new->GetZaxis()->SetLabelOffset(0.015);
   edge_histo_DYTT_new->GetZaxis()->SetLabelSize(0.05);
   edge_histo_DYTT_new->GetZaxis()->SetTitleSize(0.05);
   edge_histo_DYTT_new->GetZaxis()->SetTitleFont(42);
   ->Add(edge_histo_DYTT_new,"");
   Double_t xAxis6[10] = {12, 30, 45, 60, 75, 100, 125, 150, 175, 200}; 
   
   TH1D *edge_histo_ggWW_new = new TH1D("edge_histo_ggWW_new","ggWW",9, xAxis6);
   edge_histo_ggWW_new->SetBinContent(1,133.3759);
   edge_histo_ggWW_new->SetBinContent(2,167.2635);
   edge_histo_ggWW_new->SetBinContent(3,195.146);
   edge_histo_ggWW_new->SetBinContent(4,184.7749);
   edge_histo_ggWW_new->SetBinContent(5,243.7431);
   edge_histo_ggWW_new->SetBinContent(6,173.6151);
   edge_histo_ggWW_new->SetBinContent(7,112.5058);
   edge_histo_ggWW_new->SetBinContent(8,71.31546);
   edge_histo_ggWW_new->SetBinContent(9,47.9062);
   edge_histo_ggWW_new->SetEntries(9);

   ci = TColor::GetColor("#99ccff");
   edge_histo_ggWW_new->SetFillColor(ci);

   ci = TColor::GetColor("#6699cc");
   edge_histo_ggWW_new->SetLineColor(ci);
   edge_histo_ggWW_new->SetLineStyle(0);
   edge_histo_ggWW_new->GetXaxis()->SetNdivisions(505);
   edge_histo_ggWW_new->GetXaxis()->SetLabelFont(42);
   edge_histo_ggWW_new->GetXaxis()->SetLabelOffset(0.015);
   edge_histo_ggWW_new->GetXaxis()->SetLabelSize(0.05);
   edge_histo_ggWW_new->GetXaxis()->SetTitleSize(0.05);
   edge_histo_ggWW_new->GetXaxis()->SetTitleOffset(1.4);
   edge_histo_ggWW_new->GetXaxis()->SetTitleFont(42);
   edge_histo_ggWW_new->GetYaxis()->SetNdivisions(505);
   edge_histo_ggWW_new->GetYaxis()->SetLabelFont(42);
   edge_histo_ggWW_new->GetYaxis()->SetLabelOffset(0.015);
   edge_histo_ggWW_new->GetYaxis()->SetLabelSize(0.05);
   edge_histo_ggWW_new->GetYaxis()->SetTitleSize(0.05);
   edge_histo_ggWW_new->GetYaxis()->SetTitleOffset(1.2);
   edge_histo_ggWW_new->GetYaxis()->SetTitleFont(42);
   edge_histo_ggWW_new->GetZaxis()->SetNdivisions(505);
   edge_histo_ggWW_new->GetZaxis()->SetLabelFont(42);
   edge_histo_ggWW_new->GetZaxis()->SetLabelOffset(0.015);
   edge_histo_ggWW_new->GetZaxis()->SetLabelSize(0.05);
   edge_histo_ggWW_new->GetZaxis()->SetTitleSize(0.05);
   edge_histo_ggWW_new->GetZaxis()->SetTitleFont(42);
   ->Add(edge_histo_ggWW_new,"");
   Double_t xAxis7[10] = {12, 30, 45, 60, 75, 100, 125, 150, 175, 200}; 
   
   TH1D *edge_histo_ggHBin0_new__1 = new TH1D("edge_histo_ggHBin0_new__1","ggHBin0",9, xAxis7);
   edge_histo_ggHBin0_new__1->SetBinContent(1,30.62174);
   edge_histo_ggHBin0_new__1->SetBinContent(2,27.17779);
   edge_histo_ggHBin0_new__1->SetBinContent(3,14.02505);
   edge_histo_ggHBin0_new__1->SetBinContent(4,4.113884);
   edge_histo_ggHBin0_new__1->SetBinContent(5,0.593778);
   edge_histo_ggHBin0_new__1->SetBinContent(6,0.1136382);
   edge_histo_ggHBin0_new__1->SetBinContent(7,0.1300296);
   edge_histo_ggHBin0_new__1->SetBinContent(8,0.06478812);
   edge_histo_ggHBin0_new__1->SetEntries(9);
   edge_histo_ggHBin0_new__1->SetDirectory(0);
   edge_histo_ggHBin0_new__1->SetFillColor(1);
   edge_histo_ggHBin0_new__1->SetFillStyle(3003);
   edge_histo_ggHBin0_new__1->SetLineStyle(0);
   edge_histo_ggHBin0_new__1->SetLineWidth(3);
   edge_histo_ggHBin0_new__1->GetXaxis()->SetNdivisions(505);
   edge_histo_ggHBin0_new__1->GetXaxis()->SetLabelFont(42);
   edge_histo_ggHBin0_new__1->GetXaxis()->SetLabelOffset(0.015);
   edge_histo_ggHBin0_new__1->GetXaxis()->SetLabelSize(0.05);
   edge_histo_ggHBin0_new__1->GetXaxis()->SetTitleSize(0.05);
   edge_histo_ggHBin0_new__1->GetXaxis()->SetTitleOffset(1.4);
   edge_histo_ggHBin0_new__1->GetXaxis()->SetTitleFont(42);
   edge_histo_ggHBin0_new__1->GetYaxis()->SetNdivisions(505);
   edge_histo_ggHBin0_new__1->GetYaxis()->SetLabelFont(42);
   edge_histo_ggHBin0_new__1->GetYaxis()->SetLabelOffset(0.015);
   edge_histo_ggHBin0_new__1->GetYaxis()->SetLabelSize(0.05);
   edge_histo_ggHBin0_new__1->GetYaxis()->SetTitleSize(0.05);
   edge_histo_ggHBin0_new__1->GetYaxis()->SetTitleOffset(1.2);
   edge_histo_ggHBin0_new__1->GetYaxis()->SetTitleFont(42);
   edge_histo_ggHBin0_new__1->GetZaxis()->SetNdivisions(505);
   edge_histo_ggHBin0_new__1->GetZaxis()->SetLabelFont(42);
   edge_histo_ggHBin0_new__1->GetZaxis()->SetLabelOffset(0.015);
   edge_histo_ggHBin0_new__1->GetZaxis()->SetLabelSize(0.05);
   edge_histo_ggHBin0_new__1->GetZaxis()->SetTitleSize(0.05);
   edge_histo_ggHBin0_new__1->GetZaxis()->SetTitleFont(42);
   ->Add(edge_histo_ggHBin0_new,"");
   ->Draw("hist");
   Double_t xAxis8[10] = {12, 30, 45, 60, 75, 100, 125, 150, 175, 200}; 
   
   TH1D *edge_histo_ggHBin0_new = new TH1D("edge_histo_ggHBin0_new","ggHBin0",9, xAxis8);
   edge_histo_ggHBin0_new->SetBinContent(1,30.62174);
   edge_histo_ggHBin0_new->SetBinContent(2,27.17779);
   edge_histo_ggHBin0_new->SetBinContent(3,14.02505);
   edge_histo_ggHBin0_new->SetBinContent(4,4.113884);
   edge_histo_ggHBin0_new->SetBinContent(5,0.593778);
   edge_histo_ggHBin0_new->SetBinContent(6,0.1136382);
   edge_histo_ggHBin0_new->SetBinContent(7,0.1300296);
   edge_histo_ggHBin0_new->SetBinContent(8,0.06478812);
   edge_histo_ggHBin0_new->SetEntries(9);
   edge_histo_ggHBin0_new->SetFillColor(1);
   edge_histo_ggHBin0_new->SetFillStyle(0);
   edge_histo_ggHBin0_new->SetLineStyle(2);
   edge_histo_ggHBin0_new->SetLineWidth(3);
   edge_histo_ggHBin0_new->GetXaxis()->SetNdivisions(505);
   edge_histo_ggHBin0_new->GetXaxis()->SetLabelFont(42);
   edge_histo_ggHBin0_new->GetXaxis()->SetLabelOffset(0.015);
   edge_histo_ggHBin0_new->GetXaxis()->SetLabelSize(0.05);
   edge_histo_ggHBin0_new->GetXaxis()->SetTitleSize(0.05);
   edge_histo_ggHBin0_new->GetXaxis()->SetTitleOffset(1.4);
   edge_histo_ggHBin0_new->GetXaxis()->SetTitleFont(42);
   edge_histo_ggHBin0_new->GetYaxis()->SetNdivisions(505);
   edge_histo_ggHBin0_new->GetYaxis()->SetLabelFont(42);
   edge_histo_ggHBin0_new->GetYaxis()->SetLabelOffset(0.015);
   edge_histo_ggHBin0_new->GetYaxis()->SetLabelSize(0.05);
   edge_histo_ggHBin0_new->GetYaxis()->SetTitleSize(0.05);
   edge_histo_ggHBin0_new->GetYaxis()->SetTitleOffset(1.2);
   edge_histo_ggHBin0_new->GetYaxis()->SetTitleFont(42);
   edge_histo_ggHBin0_new->GetZaxis()->SetNdivisions(505);
   edge_histo_ggHBin0_new->GetZaxis()->SetLabelFont(42);
   edge_histo_ggHBin0_new->GetZaxis()->SetLabelOffset(0.015);
   edge_histo_ggHBin0_new->GetZaxis()->SetLabelSize(0.05);
   edge_histo_ggHBin0_new->GetZaxis()->SetTitleSize(0.05);
   edge_histo_ggHBin0_new->GetZaxis()->SetTitleFont(42);
   edge_histo_ggHBin0_new->Draw("hist,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,21,0);
   grae->SetPointError(0,9,9,0,1.14);
   grae->SetPoint(1,37.5,0);
   grae->SetPointError(1,7.5,7.5,0,1.14);
   grae->SetPoint(2,52.5,0);
   grae->SetPointError(2,7.5,7.5,0,1.14);
   grae->SetPoint(3,67.5,0);
   grae->SetPointError(3,7.5,7.5,0,1.14);
   grae->SetPoint(4,87.5,378);
   grae->SetPointError(4,12.5,12.5,19.43404,20.45982);
   grae->SetPoint(5,112.5,249);
   grae->SetPointError(5,12.5,12.5,15.76947,16.80123);
   grae->SetPoint(6,137.5,177);
   grae->SetPointError(6,12.5,12.5,13.29184,14.32952);
   grae->SetPoint(7,162.5,93);
   grae->SetPointError(7,12.5,12.5,9.626478,10.67847);
   grae->SetPoint(8,187.5,60);
   grae->SetPointError(8,12.5,12.5,7.72447,8.789207);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0,218.8);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(438.3058);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetFillStyle(1);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->GetXaxis()->SetNdivisions(505);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetNdivisions(505);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetNdivisions(505);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph1);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.22,0.8,0.42,0.86,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(20.07259);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("edge_histo_Data_new"," data","lp");
   entry->SetLineColor(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(0.22,0.74,0.42,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(20.07259);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("edge_histo_ggHBin0_new","H","f");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(0.22,0.68,0.42,0.74,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(20.07259);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("edge_histo_VV_new","WZ/ZZ/VVV","f");

   ci = TColor::GetColor("#3366ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0033cc");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(0.22,0.62,0.42,0.68,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(20.07259);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("edge_histo_WJet_new","W+jets","f");

   ci = TColor::GetColor("#999999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(0.467,0.8,0.667,0.86,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(20.07259);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("edge_histo_Vg_new","V+#gamma/V+#gamma*","f");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(0.467,0.74,0.667,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(20.07259);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("edge_histo_Top0jet_new","Top","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cccc00");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(0.467,0.68,0.667,0.74,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(20.07259);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("edge_histo_DYTT_new","DYTT","f");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(0.467,0.62,0.667,0.68,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(20.07259);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("edge_histo_ggWW_new","WW","f");

   ci = TColor::GetColor("#99ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#6699cc");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.67,0.781,"#splitline{CMS preliminary}{#splitline{     L = 19.4 fb^{-1}}{#splitline{     #sqrt{s} = 8 TeV}{
p_{T}^{H} [0, 15) GeV}}}");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(44);
   tex->SetTextSize(19.06896);
   tex->SetLineWidth(2);
   tex->Draw();
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(3345);
   grae->SetPoint(0,0.5,225.7575);
   grae->SetPointError(0,0.5,0.5,22.55396,45.24846);
   grae->SetPoint(1,1.5,269.844);
   grae->SetPointError(1,0.5,0.5,27.81794,56.2007);
   grae->SetPoint(2,2.5,291.9585);
   grae->SetPointError(2,0.5,0.5,32.93006,63.30274);
   grae->SetPoint(3,3.5,261.894);
   grae->SetPointError(3,0.5,0.5,31.20771,60.34091);
   grae->SetPoint(4,4.5,327.8966);
   grae->SetPointError(4,0.5,0.5,40.56587,79.09517);
   grae->SetPoint(5,5.5,221.4602);
   grae->SetPointError(5,0.5,0.5,28.93399,56.64038);
   grae->SetPoint(6,6.5,150.5601);
   grae->SetPointError(6,0.5,0.5,19.60722,36.3435);
   grae->SetPoint(7,7.5,91.12444);
   grae->SetPointError(7,0.5,0.5,12.21816,22.95519);
   grae->SetPoint(8,8.5,63.19935);
   grae->SetPointError(8,0.5,0.5,8.231351,15.35172);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0,9.9);
   Graph_Graph2->SetMinimum(19.76562);
   Graph_Graph2->SetMaximum(442.1941);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetFillStyle(1);
   Graph_Graph2->SetLineStyle(0);
   Graph_Graph2->GetXaxis()->SetNdivisions(505);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetNdivisions(505);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetNdivisions(505);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph2);
   
   grae->Draw("e2");
   pad1->Modified();
   mll->cd();
  
// ------------>Primitives in pad: pad2
   pad2 = new TPad("pad2", "pad2",0,0,1,0.26);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-33.55881,-0.2359705,213.6568,1.640754);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(10);
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.18);
   pad2->SetRightMargin(0.05);
   pad2->SetTopMargin(0.075);
   pad2->SetBottomMargin(0.3921569);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameLineStyle(0);
   pad2->SetFrameLineWidth(2);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderSize(10);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameLineStyle(0);
   pad2->SetFrameLineWidth(2);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderSize(10);
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("rref");
   grae->SetTitle("");

   ci = TColor::GetColor("#999999");
   grae->SetFillColor(ci);
   grae->SetLineWidth(0);
   grae->SetPoint(0,21,1);
   grae->SetPointError(0,9,9,0.09990347,0.2004295);
   grae->SetPoint(1,37.5,1);
   grae->SetPointError(1,7.5,7.5,0.103089,0.2082711);
   grae->SetPoint(2,52.5,1);
   grae->SetPointError(2,7.5,7.5,0.1127902,0.216821);
   grae->SetPoint(3,67.5,1);
   grae->SetPointError(3,7.5,7.5,0.1191616,0.230402);
   grae->SetPoint(4,87.5,1);
   grae->SetPointError(4,12.5,12.5,0.1237154,0.2412199);
   grae->SetPoint(5,112.5,1);
   grae->SetPointError(5,12.5,12.5,0.1306509,0.2557587);
   grae->SetPoint(6,137.5,1);
   grae->SetPointError(6,12.5,12.5,0.1302285,0.2413886);
   grae->SetPoint(7,162.5,1);
   grae->SetPointError(7,12.5,12.5,0.1340821,0.2519103);
   grae->SetPoint(8,187.5,1);
   grae->SetPointError(8,12.5,12.5,0.1302442,0.2429096);
   
   TH1F *Graph_rref3 = new TH1F("Graph_rref3","",100,0,218.8);
   Graph_rref3->SetMinimum(0.5);
   Graph_rref3->SetMaximum(1.5);
   Graph_rref3->SetDirectory(0);
   Graph_rref3->SetStats(0);
   Graph_rref3->SetFillStyle(1);
   Graph_rref3->SetLineStyle(0);
   Graph_rref3->GetXaxis()->SetTitle("mll [GeV]");
   Graph_rref3->GetXaxis()->SetRange(6,92);
   Graph_rref3->GetXaxis()->SetNdivisions(505);
   Graph_rref3->GetXaxis()->SetLabelFont(44);
   Graph_rref3->GetXaxis()->SetLabelOffset(0.01);
   Graph_rref3->GetXaxis()->SetLabelSize(30.10888);
   Graph_rref3->GetXaxis()->SetTitleSize(30.10888);
   Graph_rref3->GetXaxis()->SetTitleOffset(3.6);
   Graph_rref3->GetXaxis()->SetTitleFont(44);
   Graph_rref3->GetYaxis()->SetTitle("data/exp");
   Graph_rref3->GetYaxis()->SetNdivisions(502);
   Graph_rref3->GetYaxis()->SetLabelFont(44);
   Graph_rref3->GetYaxis()->SetLabelOffset(0.01);
   Graph_rref3->GetYaxis()->SetLabelSize(30.10888);
   Graph_rref3->GetYaxis()->SetTitleSize(30.10888);
   Graph_rref3->GetYaxis()->SetTitleOffset(1.6);
   Graph_rref3->GetYaxis()->SetTitleFont(44);
   Graph_rref3->GetZaxis()->SetNdivisions(505);
   Graph_rref3->GetZaxis()->SetLabelFont(42);
   Graph_rref3->GetZaxis()->SetLabelOffset(0.015);
   Graph_rref3->GetZaxis()->SetLabelSize(0.05);
   Graph_rref3->GetZaxis()->SetTitleSize(0.05);
   Graph_rref3->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_rref3);
   
   grae->Draw("ae2");
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("g_rdat");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,21,0);
   grae->SetPointError(0,9,9,0,0.005049667);
   grae->SetPoint(1,37.5,0);
   grae->SetPointError(1,7.5,7.5,0,0.004224663);
   grae->SetPoint(2,52.5,0);
   grae->SetPointError(2,7.5,7.5,0,0.003904665);
   grae->SetPoint(3,67.5,0);
   grae->SetPointError(3,7.5,7.5,0,0.004352906);
   grae->SetPoint(4,87.5,1.152802);
   grae->SetPointError(4,12.5,12.5,0.0592688,0.06239716);
   grae->SetPoint(5,112.5,1.124355);
   grae->SetPointError(5,12.5,12.5,0.07120677,0.07586569);
   grae->SetPoint(6,137.5,1.17561);
   grae->SetPointError(6,12.5,12.5,0.08828259,0.09517471);
   grae->SetPoint(7,162.5,1.020582);
   grae->SetPointError(7,12.5,12.5,0.105641,0.1171856);
   grae->SetPoint(8,187.5,0.9493769);
   grae->SetPointError(8,12.5,12.5,0.1222239,0.1390712);
   
   TH1F *Graph_g_rdat4 = new TH1F("Graph_g_rdat4","",100,0,218.8);
   Graph_g_rdat4->SetMinimum(0);
   Graph_g_rdat4->SetMaximum(1.397863);
   Graph_g_rdat4->SetDirectory(0);
   Graph_g_rdat4->SetStats(0);
   Graph_g_rdat4->SetFillStyle(1);
   Graph_g_rdat4->SetLineStyle(0);
   Graph_g_rdat4->GetXaxis()->SetNdivisions(505);
   Graph_g_rdat4->GetXaxis()->SetLabelFont(42);
   Graph_g_rdat4->GetXaxis()->SetLabelOffset(0.015);
   Graph_g_rdat4->GetXaxis()->SetLabelSize(0.05);
   Graph_g_rdat4->GetXaxis()->SetTitleSize(0.05);
   Graph_g_rdat4->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_rdat4->GetXaxis()->SetTitleFont(42);
   Graph_g_rdat4->GetYaxis()->SetNdivisions(505);
   Graph_g_rdat4->GetYaxis()->SetLabelFont(42);
   Graph_g_rdat4->GetYaxis()->SetLabelOffset(0.015);
   Graph_g_rdat4->GetYaxis()->SetLabelSize(0.05);
   Graph_g_rdat4->GetYaxis()->SetTitleSize(0.05);
   Graph_g_rdat4->GetYaxis()->SetTitleOffset(1.2);
   Graph_g_rdat4->GetYaxis()->SetTitleFont(42);
   Graph_g_rdat4->GetZaxis()->SetNdivisions(505);
   Graph_g_rdat4->GetZaxis()->SetLabelFont(42);
   Graph_g_rdat4->GetZaxis()->SetLabelOffset(0.015);
   Graph_g_rdat4->GetZaxis()->SetLabelSize(0.05);
   Graph_g_rdat4->GetZaxis()->SetTitleSize(0.05);
   Graph_g_rdat4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_g_rdat4);
   
   grae->Draw(" p");
   TLine *line = new TLine(12,1,200,1);
   line->Draw();
   pad2->Modified();
   mll->cd();
   mll->Modified();
   mll->cd();
   mll->SetSelected(mll);
}
