#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
#-     PARTS:
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/PART/2
Air
         5      0601         0
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/PART/3
Air_gauche
         5      0601         0
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/PART/5
Air_droite
         5      0601         0
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
#-     MATERIALS
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/MAT/ELAST/2
tole2024
#              RHO_I
                 122                   0
#                  E                  nu
                .069                  .4
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/MAT/VOID/10
void
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/MAT/HYD_VISC/0601
Linear_EOS
#              RHO_I
                 122                   0
#              Knu
                   0
#                 C0                  C1                  C2                  C3
                 100                  25                   0                   0
#               Pmin                 Psh
               1E-20                   0
#                 C4                  C5                  E0
                   0                   0                 100
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/EULER/MAT/0601
#     Modif. factor.
                   0
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/MAT/HYD_VISC/0602
PerfectGas_EOS
#              RHO_I
                 122                   0
#              Knu
                   0
#                 C0                  C1                  C2                  C3
                   0                   0                   0                   0
#               Pmin                 Psh
               1E-20                   0
#                 C4                  C5                  E0
                 0.4                 0.4                 100
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/EULER/MAT/0602
#     Modif. factor.
                   0
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/MAT/LAW51/5101
Linear_EOS_monomaterial

#    Iform
         0
#              P_ext                  Nu              Nu_Vol
                   0                   0                   0
#        ALPHA0_mat1           RHO0_mat1             E0_mat1           Pmin_mat1             C0_mat1
                 1.0                 122                 100               1E-20                 100
#            C1_mat1             C2_mat1             C3_mat1             C4_mat1             C5_mat1
                  25                   0                   0                   0                   0
#            G1_mat1
                   0
                 0.0                 122                 100               1E-20                 100
#            C1_mat2             C2_mat2             C3_mat2             C4_mat2             C5_mat2
                  25                   0                   0                   0                   0
#            G1_mat2
                   0
#        ALPHA0_mat3           RHO0_mat3             E0_mat3           Pmin_mat3             C0_mat3
                 0.0                 122                 100               1E-20                 100
#            C1_mat3             C2_mat3             C3_mat3             C4_mat3             C5_mat3
                  25                   0                   0                   0                   0
#            G1_mat3
                   0
/EULER/MAT/5101
#     Modif. factor.
                   0
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/MAT/LAW51/5102
Linear_EOS_multimaterial

#    Iform
         0
#              P_ext                  Nu              Nu_Vol
                   0                   0                   0
#        ALPHA0_mat1           RHO0_mat1             E0_mat1           Pmin_mat1             C0_mat1
0.333333333333333333                 122                 100               1E-20                 100
#            C1_mat1             C2_mat1             C3_mat1             C4_mat1             C5_mat1
                  25                   0                   0                   0                   0
#            G1_mat1
                   0
#        ALPHA0_mat2           RHO0_mat2             E0_mat2           Pmin_mat2             C0_mat2
0.333333333333333333                 122                 100               1E-20                 100
#            C1_mat2             C2_mat2             C3_mat2             C4_mat2             C5_mat2
                  25                   0                   0                   0                   0
#            G1_mat2
                   0
#        ALPHA0_mat3           RHO0_mat3             E0_mat3           Pmin_mat3             C0_mat3
0.333333333333333333                 122                 100               1E-20                 100
#            C1_mat3             C2_mat3             C3_mat3             C4_mat3             C5_mat3
                  25                   0                   0                   0                   0
#            G1_mat3
                   0
/EULER/MAT/5102
#     Modif. factor.
                   0
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/MAT/LAW51/5103
PerfectGas_EOS_monomaterial

#    Iform
         0
#              P_ext                  Nu              Nu_Vol
                   0                   0                   0
#        ALPHA0_mat1           RHO0_mat1             E0_mat1           Pmin_mat1             C0_mat1
                 1.0                 122                 100               1E-20                   0
#            C1_mat1             C2_mat1             C3_mat1             C4_mat1             C5_mat1
                   0                   0                   0                 0.4                 0.4
#            G1_mat1
                   0
#        ALPHA0_mat2           RHO0_mat2             E0_mat2           Pmin_mat2             C0_mat2
                 0.0                 122                 100               1E-20                   0
#            C1_mat2             C2_mat2             C3_mat2             C4_mat2             C5_mat2
                   0                   0                   0                 0.4                 0.4
#            G1_mat2
                   0
#        ALPHA0_mat3           RHO0_mat3             E0_mat3           Pmin_mat3             C0_mat3
                 0.0                 122                 100               1E-20                   0
#            C1_mat3             C2_mat3             C3_mat3             C4_mat3             C5_mat3
                   0                   0                   0                 0.4                 0.4
#            G1_mat3
                   0
/EULER/MAT/5103
#     Modif. factor.
                   0
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|
/MAT/LAW51/5104
PerfectGas_EOS_multimaterial

#    Iform
         0
#              P_ext                  Nu              Nu_Vol
                   0                   0                   0
#        ALPHA0_mat1           RHO0_mat1             E0_mat1           Pmin_mat1             C0_mat1
0.333333333333333333                 122                 100               1E-20                   0
#            C1_mat1             C2_mat1             C3_mat1             C4_mat1             C5_mat1
                   0                   0                   0                 0.4                 0.4
#            G1_mat1
                   0
#        ALPHA0_mat2           RHO0_mat2             E0_mat2           Pmin_mat2             C0_mat2
0.333333333333333333                 122                 100               1E-20                   0
#            C1_mat2             C2_mat2             C3_mat2             C4_mat2             C5_mat2
                   0                   0                   0                 0.4                 0.4
#            G1_mat2
                   0
#        ALPHA0_mat3           RHO0_mat3             E0_mat3           Pmin_mat3             C0_mat3
0.333333333333333333                 122                 100               1E-20                   0
#            C1_mat3             C2_mat3             C3_mat3             C4_mat3             C5_mat3
                   0                   0                   0                 0.4                 0.4
#            G1_mat3
                   0
/EULER/MAT/5104
#     Modif. factor.
                   0
#---1----|----2----|----3----|----4----|----5----|----6----|----7----|----8----|----9----|---10----|