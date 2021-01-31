namespace AscMapKitSetup
{
    partial class MainForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }

            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainForm));
            this.lblUE4Path = new System.Windows.Forms.Label();
            this.txtBoxUE4Path = new System.Windows.Forms.TextBox();
            this.btnUE4Browse = new System.Windows.Forms.Button();
            this.lblCampaignProject = new System.Windows.Forms.Label();
            this.txtBoxCampaignProjectPath = new System.Windows.Forms.TextBox();
            this.btnCampaignProjectBrowse = new System.Windows.Forms.Button();
            this.lblCampaignName = new System.Windows.Forms.Label();
            this.lblCampaignNameValue = new System.Windows.Forms.Label();
            this.lblInit = new System.Windows.Forms.Label();
            this.btnInit = new System.Windows.Forms.Button();
            this.lblStatus = new System.Windows.Forms.Label();
            this.lblGamePath = new System.Windows.Forms.Label();
            this.txtBoxGamePath = new System.Windows.Forms.TextBox();
            this.btnGamePathBrowse = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lblUE4Path
            // 
            this.lblUE4Path.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblUE4Path.Location = new System.Drawing.Point(8, 68);
            this.lblUE4Path.Margin = new System.Windows.Forms.Padding(0);
            this.lblUE4Path.Name = "lblUE4Path";
            this.lblUE4Path.Size = new System.Drawing.Size(537, 25);
            this.lblUE4Path.TabIndex = 0;
            this.lblUE4Path.Text = "Step 2: Is UE4 installed? Provide the root directory:";
            this.lblUE4Path.TextAlign = System.Drawing.ContentAlignment.BottomLeft;
            // 
            // txtBoxUE4Path
            // 
            this.txtBoxUE4Path.BackColor = System.Drawing.SystemColors.ControlDark;
            this.txtBoxUE4Path.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.txtBoxUE4Path.ForeColor = System.Drawing.SystemColors.ControlText;
            this.txtBoxUE4Path.Location = new System.Drawing.Point(8, 95);
            this.txtBoxUE4Path.Margin = new System.Windows.Forms.Padding(2, 2, 2, 2);
            this.txtBoxUE4Path.Name = "txtBoxUE4Path";
            this.txtBoxUE4Path.Size = new System.Drawing.Size(477, 26);
            this.txtBoxUE4Path.TabIndex = 1;
            this.txtBoxUE4Path.Leave += new System.EventHandler(this.txtBoxUE4Path_Leave);
            // 
            // btnUE4Browse
            // 
            this.btnUE4Browse.ForeColor = System.Drawing.SystemColors.ControlText;
            this.btnUE4Browse.Location = new System.Drawing.Point(488, 95);
            this.btnUE4Browse.Margin = new System.Windows.Forms.Padding(2, 2, 2, 2);
            this.btnUE4Browse.Name = "btnUE4Browse";
            this.btnUE4Browse.Size = new System.Drawing.Size(37, 22);
            this.btnUE4Browse.TabIndex = 2;
            this.btnUE4Browse.Text = "...";
            this.btnUE4Browse.UseVisualStyleBackColor = true;
            this.btnUE4Browse.Click += new System.EventHandler(this.btnUE4Browse_Click);
            // 
            // lblCampaignProject
            // 
            this.lblCampaignProject.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblCampaignProject.Location = new System.Drawing.Point(9, 137);
            this.lblCampaignProject.Margin = new System.Windows.Forms.Padding(0);
            this.lblCampaignProject.Name = "lblCampaignProject";
            this.lblCampaignProject.Size = new System.Drawing.Size(537, 25);
            this.lblCampaignProject.TabIndex = 3;
            this.lblCampaignProject.Text = "Step 3: Is your UE4 campaign project created? Provide the *.uproject file:";
            this.lblCampaignProject.TextAlign = System.Drawing.ContentAlignment.BottomLeft;
            // 
            // txtBoxCampaignProjectPath
            // 
            this.txtBoxCampaignProjectPath.BackColor = System.Drawing.SystemColors.ControlDark;
            this.txtBoxCampaignProjectPath.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.txtBoxCampaignProjectPath.ForeColor = System.Drawing.SystemColors.ControlText;
            this.txtBoxCampaignProjectPath.Location = new System.Drawing.Point(9, 164);
            this.txtBoxCampaignProjectPath.Margin = new System.Windows.Forms.Padding(2, 2, 2, 2);
            this.txtBoxCampaignProjectPath.Name = "txtBoxCampaignProjectPath";
            this.txtBoxCampaignProjectPath.Size = new System.Drawing.Size(477, 26);
            this.txtBoxCampaignProjectPath.TabIndex = 4;
            this.txtBoxCampaignProjectPath.Leave += new System.EventHandler(this.txtBoxCampaignProjectPath_Leave);
            // 
            // btnCampaignProjectBrowse
            // 
            this.btnCampaignProjectBrowse.ForeColor = System.Drawing.SystemColors.ControlText;
            this.btnCampaignProjectBrowse.Location = new System.Drawing.Point(488, 164);
            this.btnCampaignProjectBrowse.Margin = new System.Windows.Forms.Padding(2, 2, 2, 2);
            this.btnCampaignProjectBrowse.Name = "btnCampaignProjectBrowse";
            this.btnCampaignProjectBrowse.Size = new System.Drawing.Size(37, 22);
            this.btnCampaignProjectBrowse.TabIndex = 5;
            this.btnCampaignProjectBrowse.Text = "...";
            this.btnCampaignProjectBrowse.UseVisualStyleBackColor = true;
            this.btnCampaignProjectBrowse.Click += new System.EventHandler(this.btnCampaignProjectBrowse_Click);
            // 
            // lblCampaignName
            // 
            this.lblCampaignName.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblCampaignName.Location = new System.Drawing.Point(9, 203);
            this.lblCampaignName.Margin = new System.Windows.Forms.Padding(0);
            this.lblCampaignName.Name = "lblCampaignName";
            this.lblCampaignName.Size = new System.Drawing.Size(537, 25);
            this.lblCampaignName.TabIndex = 6;
            this.lblCampaignName.Text = "Step 4: Verify: is this your UE4 project name?";
            this.lblCampaignName.TextAlign = System.Drawing.ContentAlignment.BottomLeft;
            // 
            // lblCampaignNameValue
            // 
            this.lblCampaignNameValue.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblCampaignNameValue.ForeColor = System.Drawing.SystemColors.ControlText;
            this.lblCampaignNameValue.Location = new System.Drawing.Point(9, 230);
            this.lblCampaignNameValue.Margin = new System.Windows.Forms.Padding(0);
            this.lblCampaignNameValue.Name = "lblCampaignNameValue";
            this.lblCampaignNameValue.Size = new System.Drawing.Size(537, 25);
            this.lblCampaignNameValue.TabIndex = 7;
            this.lblCampaignNameValue.Text = "[waiting for campaign directory]";
            // 
            // lblInit
            // 
            this.lblInit.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblInit.Location = new System.Drawing.Point(8, 264);
            this.lblInit.Margin = new System.Windows.Forms.Padding(0);
            this.lblInit.Name = "lblInit";
            this.lblInit.Size = new System.Drawing.Size(547, 26);
            this.lblInit.TabIndex = 8;
            this.lblInit.Text = "Step 5: Initialize Ascentroid Map Kit";
            this.lblInit.TextAlign = System.Drawing.ContentAlignment.BottomLeft;
            // 
            // btnInit
            // 
            this.btnInit.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.btnInit.ForeColor = System.Drawing.SystemColors.ControlText;
            this.btnInit.Location = new System.Drawing.Point(9, 294);
            this.btnInit.Margin = new System.Windows.Forms.Padding(2, 2, 2, 2);
            this.btnInit.Name = "btnInit";
            this.btnInit.Size = new System.Drawing.Size(144, 31);
            this.btnInit.TabIndex = 9;
            this.btnInit.Text = "Initialize Now!";
            this.btnInit.UseVisualStyleBackColor = true;
            this.btnInit.Click += new System.EventHandler(this.btnInit_Click);
            // 
            // lblStatus
            // 
            this.lblStatus.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblStatus.ForeColor = System.Drawing.SystemColors.ControlText;
            this.lblStatus.Location = new System.Drawing.Point(155, 298);
            this.lblStatus.Margin = new System.Windows.Forms.Padding(0);
            this.lblStatus.Name = "lblStatus";
            this.lblStatus.Size = new System.Drawing.Size(573, 50);
            this.lblStatus.TabIndex = 10;
            this.lblStatus.Text = "[waiting]";
            // 
            // lblGamePath
            // 
            this.lblGamePath.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblGamePath.Location = new System.Drawing.Point(8, 3);
            this.lblGamePath.Margin = new System.Windows.Forms.Padding(0);
            this.lblGamePath.Name = "lblGamePath";
            this.lblGamePath.Size = new System.Drawing.Size(553, 25);
            this.lblGamePath.TabIndex = 11;
            this.lblGamePath.Text = "Step 1: Where is Ascentroid (the game) installed? Provide the root directory:";
            this.lblGamePath.TextAlign = System.Drawing.ContentAlignment.BottomLeft;
            // 
            // txtBoxGamePath
            // 
            this.txtBoxGamePath.BackColor = System.Drawing.SystemColors.ControlDark;
            this.txtBoxGamePath.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.txtBoxGamePath.ForeColor = System.Drawing.SystemColors.ControlText;
            this.txtBoxGamePath.Location = new System.Drawing.Point(8, 29);
            this.txtBoxGamePath.Margin = new System.Windows.Forms.Padding(2, 2, 2, 2);
            this.txtBoxGamePath.Name = "txtBoxGamePath";
            this.txtBoxGamePath.Size = new System.Drawing.Size(477, 26);
            this.txtBoxGamePath.TabIndex = 12;
            this.txtBoxGamePath.Leave += new System.EventHandler(this.txtBoxGamePath_Leave);
            // 
            // btnGamePathBrowse
            // 
            this.btnGamePathBrowse.ForeColor = System.Drawing.SystemColors.ControlText;
            this.btnGamePathBrowse.Location = new System.Drawing.Point(488, 29);
            this.btnGamePathBrowse.Margin = new System.Windows.Forms.Padding(2, 2, 2, 2);
            this.btnGamePathBrowse.Name = "btnGamePathBrowse";
            this.btnGamePathBrowse.Size = new System.Drawing.Size(37, 22);
            this.btnGamePathBrowse.TabIndex = 13;
            this.btnGamePathBrowse.Text = "...";
            this.btnGamePathBrowse.UseVisualStyleBackColor = true;
            this.btnGamePathBrowse.Click += new System.EventHandler(this.btnGamePathBrowse_Click);
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlDarkDark;
            this.ClientSize = new System.Drawing.Size(737, 357);
            this.Controls.Add(this.btnGamePathBrowse);
            this.Controls.Add(this.txtBoxGamePath);
            this.Controls.Add(this.lblGamePath);
            this.Controls.Add(this.lblStatus);
            this.Controls.Add(this.btnInit);
            this.Controls.Add(this.lblInit);
            this.Controls.Add(this.lblCampaignNameValue);
            this.Controls.Add(this.lblCampaignName);
            this.Controls.Add(this.btnCampaignProjectBrowse);
            this.Controls.Add(this.txtBoxCampaignProjectPath);
            this.Controls.Add(this.lblCampaignProject);
            this.Controls.Add(this.btnUE4Browse);
            this.Controls.Add(this.txtBoxUE4Path);
            this.Controls.Add(this.lblUE4Path);
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.ForeColor = System.Drawing.SystemColors.Window;
            this.Icon = ((System.Drawing.Icon) (resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(5, 4, 5, 4);
            this.Name = "MainForm";
            this.Text = "Ascentroid Map Kit Setup";
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.ResumeLayout(false);
            this.PerformLayout();
        }

        private System.Windows.Forms.Button btnGamePathBrowse;
        private System.Windows.Forms.TextBox txtBoxGamePath;

        private System.Windows.Forms.Label lblGamePath;

        private System.Windows.Forms.Label lblStatus;

        private System.Windows.Forms.Button btnInit;

        private System.Windows.Forms.Label lblInit;

        private System.Windows.Forms.Label lblCampaignNameValue;

        private System.Windows.Forms.Label lblCampaignName;

        private System.Windows.Forms.Button btnCampaignProjectBrowse;
        private System.Windows.Forms.TextBox txtBoxCampaignProjectPath;

        private System.Windows.Forms.Label lblCampaignProject;

        private System.Windows.Forms.TextBox txtBoxUE4Path;

        private System.Windows.Forms.Label lblUE4Path;

        #endregion

        private System.Windows.Forms.Button btnUE4Browse;
    }
}