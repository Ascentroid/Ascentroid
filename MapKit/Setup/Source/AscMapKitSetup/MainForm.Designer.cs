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
            this.lblUE4Path.Font = new System.Drawing.Font("Iceland", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblUE4Path.Location = new System.Drawing.Point(12, 98);
            this.lblUE4Path.Margin = new System.Windows.Forms.Padding(0);
            this.lblUE4Path.Name = "lblUE4Path";
            this.lblUE4Path.Size = new System.Drawing.Size(806, 36);
            this.lblUE4Path.TabIndex = 0;
            this.lblUE4Path.Text = "Step 2: Is UE4 installed? Provide the root directory:";
            // 
            // txtBoxUE4Path
            // 
            this.txtBoxUE4Path.BackColor = System.Drawing.SystemColors.ControlDark;
            this.txtBoxUE4Path.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.txtBoxUE4Path.ForeColor = System.Drawing.SystemColors.ControlText;
            this.txtBoxUE4Path.Location = new System.Drawing.Point(12, 137);
            this.txtBoxUE4Path.Name = "txtBoxUE4Path";
            this.txtBoxUE4Path.Size = new System.Drawing.Size(713, 31);
            this.txtBoxUE4Path.TabIndex = 1;
            this.txtBoxUE4Path.Leave += new System.EventHandler(this.txtBoxUE4Path_Leave);
            // 
            // btnUE4Browse
            // 
            this.btnUE4Browse.ForeColor = System.Drawing.SystemColors.ControlText;
            this.btnUE4Browse.Location = new System.Drawing.Point(732, 137);
            this.btnUE4Browse.Name = "btnUE4Browse";
            this.btnUE4Browse.Size = new System.Drawing.Size(55, 31);
            this.btnUE4Browse.TabIndex = 2;
            this.btnUE4Browse.Text = "...";
            this.btnUE4Browse.UseVisualStyleBackColor = true;
            this.btnUE4Browse.Click += new System.EventHandler(this.btnUE4Browse_Click);
            // 
            // lblCampaignProject
            // 
            this.lblCampaignProject.Font = new System.Drawing.Font("Iceland", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblCampaignProject.Location = new System.Drawing.Point(13, 197);
            this.lblCampaignProject.Margin = new System.Windows.Forms.Padding(0);
            this.lblCampaignProject.Name = "lblCampaignProject";
            this.lblCampaignProject.Size = new System.Drawing.Size(806, 36);
            this.lblCampaignProject.TabIndex = 3;
            this.lblCampaignProject.Text = "Step 3: Is your UE4 campaign project created? Provide the *.uproject file:";
            // 
            // txtBoxCampaignProjectPath
            // 
            this.txtBoxCampaignProjectPath.BackColor = System.Drawing.SystemColors.ControlDark;
            this.txtBoxCampaignProjectPath.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.txtBoxCampaignProjectPath.ForeColor = System.Drawing.SystemColors.ControlText;
            this.txtBoxCampaignProjectPath.Location = new System.Drawing.Point(13, 236);
            this.txtBoxCampaignProjectPath.Name = "txtBoxCampaignProjectPath";
            this.txtBoxCampaignProjectPath.Size = new System.Drawing.Size(713, 31);
            this.txtBoxCampaignProjectPath.TabIndex = 4;
            this.txtBoxCampaignProjectPath.Leave += new System.EventHandler(this.txtBoxCampaignProjectPath_Leave);
            // 
            // btnCampaignProjectBrowse
            // 
            this.btnCampaignProjectBrowse.ForeColor = System.Drawing.SystemColors.ControlText;
            this.btnCampaignProjectBrowse.Location = new System.Drawing.Point(732, 236);
            this.btnCampaignProjectBrowse.Name = "btnCampaignProjectBrowse";
            this.btnCampaignProjectBrowse.Size = new System.Drawing.Size(55, 31);
            this.btnCampaignProjectBrowse.TabIndex = 5;
            this.btnCampaignProjectBrowse.Text = "...";
            this.btnCampaignProjectBrowse.UseVisualStyleBackColor = true;
            this.btnCampaignProjectBrowse.Click += new System.EventHandler(this.btnCampaignProjectBrowse_Click);
            // 
            // lblCampaignName
            // 
            this.lblCampaignName.Font = new System.Drawing.Font("Iceland", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblCampaignName.Location = new System.Drawing.Point(13, 294);
            this.lblCampaignName.Margin = new System.Windows.Forms.Padding(0);
            this.lblCampaignName.Name = "lblCampaignName";
            this.lblCampaignName.Size = new System.Drawing.Size(806, 36);
            this.lblCampaignName.TabIndex = 6;
            this.lblCampaignName.Text = "Step 4: Verify: is this your UE4 project name?\r\n";
            // 
            // lblCampaignNameValue
            // 
            this.lblCampaignNameValue.Font = new System.Drawing.Font("Iceland", 24F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblCampaignNameValue.ForeColor = System.Drawing.SystemColors.ControlText;
            this.lblCampaignNameValue.Location = new System.Drawing.Point(13, 330);
            this.lblCampaignNameValue.Margin = new System.Windows.Forms.Padding(0);
            this.lblCampaignNameValue.Name = "lblCampaignNameValue";
            this.lblCampaignNameValue.Size = new System.Drawing.Size(806, 36);
            this.lblCampaignNameValue.TabIndex = 7;
            this.lblCampaignNameValue.Text = "[waiting for campaign directory]";
            // 
            // lblInit
            // 
            this.lblInit.Font = new System.Drawing.Font("Iceland", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblInit.Location = new System.Drawing.Point(12, 383);
            this.lblInit.Margin = new System.Windows.Forms.Padding(0);
            this.lblInit.Name = "lblInit";
            this.lblInit.Size = new System.Drawing.Size(821, 36);
            this.lblInit.TabIndex = 8;
            this.lblInit.Text = "Step 5: Initialize Ascentroid Map Kit\r\n";
            // 
            // btnInit
            // 
            this.btnInit.Font = new System.Drawing.Font("Iceland", 21.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.btnInit.ForeColor = System.Drawing.SystemColors.ControlText;
            this.btnInit.Location = new System.Drawing.Point(13, 422);
            this.btnInit.Name = "btnInit";
            this.btnInit.Size = new System.Drawing.Size(216, 45);
            this.btnInit.TabIndex = 9;
            this.btnInit.Text = "Initialize Now!";
            this.btnInit.UseVisualStyleBackColor = true;
            this.btnInit.Click += new System.EventHandler(this.btnInit_Click);
            // 
            // lblStatus
            // 
            this.lblStatus.Font = new System.Drawing.Font("Iceland", 24F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblStatus.ForeColor = System.Drawing.SystemColors.ControlText;
            this.lblStatus.Location = new System.Drawing.Point(232, 428);
            this.lblStatus.Margin = new System.Windows.Forms.Padding(0);
            this.lblStatus.Name = "lblStatus";
            this.lblStatus.Size = new System.Drawing.Size(556, 36);
            this.lblStatus.TabIndex = 10;
            this.lblStatus.Text = "[waiting]";
            // 
            // lblGamePath
            // 
            this.lblGamePath.Font = new System.Drawing.Font("Iceland", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.lblGamePath.Location = new System.Drawing.Point(12, 9);
            this.lblGamePath.Margin = new System.Windows.Forms.Padding(0);
            this.lblGamePath.Name = "lblGamePath";
            this.lblGamePath.Size = new System.Drawing.Size(830, 36);
            this.lblGamePath.TabIndex = 11;
            this.lblGamePath.Text = "Step 1: Where is Ascentroid (the game) installed? Provide the root directory:";
            // 
            // txtBoxGamePath
            // 
            this.txtBoxGamePath.BackColor = System.Drawing.SystemColors.ControlDark;
            this.txtBoxGamePath.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.txtBoxGamePath.ForeColor = System.Drawing.SystemColors.ControlText;
            this.txtBoxGamePath.Location = new System.Drawing.Point(12, 42);
            this.txtBoxGamePath.Name = "txtBoxGamePath";
            this.txtBoxGamePath.Size = new System.Drawing.Size(713, 31);
            this.txtBoxGamePath.TabIndex = 12;
            this.txtBoxGamePath.Leave += new System.EventHandler(this.txtBoxGamePath_Leave);
            // 
            // btnGamePathBrowse
            // 
            this.btnGamePathBrowse.ForeColor = System.Drawing.SystemColors.ControlText;
            this.btnGamePathBrowse.Location = new System.Drawing.Point(732, 42);
            this.btnGamePathBrowse.Name = "btnGamePathBrowse";
            this.btnGamePathBrowse.Size = new System.Drawing.Size(55, 31);
            this.btnGamePathBrowse.TabIndex = 13;
            this.btnGamePathBrowse.Text = "...";
            this.btnGamePathBrowse.UseVisualStyleBackColor = true;
            this.btnGamePathBrowse.Click += new System.EventHandler(this.btnGamePathBrowse_Click);
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 23F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlDarkDark;
            this.ClientSize = new System.Drawing.Size(842, 487);
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
            this.Font = new System.Drawing.Font("Iceland", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte) (0)));
            this.ForeColor = System.Drawing.SystemColors.Window;
            this.Icon = ((System.Drawing.Icon) (resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(7, 6, 7, 6);
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