void func_00175710() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00175710: addiu $sp, $sp, -0x20
    v0 = 0x17 << 16;                                            // 0x00175714: lui $v0, 0x17
    a1 = v0 + 0x6170;                                           // 0x00175724: addiu $a1, $v0, 0x6170
    func_00176670();  // 176670                                // 0x00175730: jal 0x176670
    a1 = 0x17 << 16;                                            // 0x00175738: lui $a1, 0x17
    a2 = 1;                                                     // 0x0017573c: addiu $a2, $zero, 1
    a1 = a1 + 0x61b8;                                           // 0x00175740: addiu $a1, $a1, 0x61b8
    func_00176670();  // 176670                                // 0x00175744: jal 0x176670
    func_00176670();  // 176670                                // 0x00175754: jal 0x176670
    a2 = 2;                                                     // 0x00175758: addiu $a2, $zero, 2
    a1 = 0x17 << 16;                                            // 0x0017575c: lui $a1, 0x17
    a1 = a1 + 0x6218;                                           // 0x00175760: addiu $a1, $a1, 0x6218
    a2 = 3;                                                     // 0x00175764: addiu $a2, $zero, 3
    func_00176670();  // 176670                                // 0x00175768: jal 0x176670
    func_00176670();  // 176670                                // 0x00175778: jal 0x176670
    a2 = 4;                                                     // 0x0017577c: addiu $a2, $zero, 4
    a1 = 0x17 << 16;                                            // 0x00175780: lui $a1, 0x17
    a2 = 5;                                                     // 0x00175784: addiu $a2, $zero, 5
    func_00176670();  // 176670                                // 0x0017578c: jal 0x176670
    a1 = a1 + 0x6238;                                           // 0x00175790: addiu $a1, $a1, 0x6238
    *(uint32_t*)((s1) + 0x18) = 0;                              // 0x00175794: sw $zero, 0x18($s1)
    a0 = s1 + 0x94;                                             // 0x00175798: addiu $a0, $s1, 0x94
    func_00175910();  // 175910                                // 0x0017579c: jal 0x175910
    a0 = s1 + 0x1c;                                             // 0x001757a4: addiu $a0, $s1, 0x1c
    a1 = 0x7fff << 16;                                          // 0x001757a8: lui $a1, 0x7fff
    func_00175910();  // 175910                                // 0x001757ac: jal 0x175910
    a1 = a1 | 0xffff;                                           // 0x001757b0: ori $a1, $a1, 0xffff
    a0 = s1 + 0x44;                                             // 0x001757b4: addiu $a0, $s1, 0x44
    func_00175910();  // 175910                                // 0x001757b8: jal 0x175910
    a1 = -1;                                                    // 0x001757bc: addiu $a1, $zero, -1
    a0 = s1 + 0x6c;                                             // 0x001757c0: addiu $a0, $s1, 0x6c
    func_00175910();  // 175910                                // 0x001757c4: jal 0x175910
    a1 = -1;                                                    // 0x001757c8: addiu $a1, $zero, -1
    a0 = s1 + 0xbc;                                             // 0x001757cc: addiu $a0, $s1, 0xbc
    func_00175910();  // 175910                                // 0x001757d0: jal 0x175910
    a1 = -1;                                                    // 0x001757d4: addiu $a1, $zero, -1
    a0 = s1 + 0xe4;                                             // 0x001757d8: addiu $a0, $s1, 0xe4
    a1 = 0x7fff << 16;                                          // 0x001757dc: lui $a1, 0x7fff
    func_00175910();  // 175910                                // 0x001757e0: jal 0x175910
    a1 = a1 | 0xffff;                                           // 0x001757e4: ori $a1, $a1, 0xffff
    *(uint32_t*)((s1) + 0x10c) = 0;                             // 0x001757e8: sw $zero, 0x10c($s1)
    v0 = -1;                                                    // 0x001757ec: addiu $v0, $zero, -1
    *(uint32_t*)((s1) + 0x110) = 0;                             // 0x001757f0: sw $zero, 0x110($s1)
    *(uint32_t*)((s1) + 0x11c) = 0;                             // 0x001757f4: sw $zero, 0x11c($s1)
    a0 = s1 + 8;                                                // 0x001757f8: addiu $a0, $s1, 8
    *(uint32_t*)((s1) + 0x120) = 0;                             // 0x001757fc: sw $zero, 0x120($s1)
    v1 = 0x1f;                                                  // 0x00175800: addiu $v1, $zero, 0x1f
    *(uint32_t*)((s1) + 0x124) = 0;                             // 0x00175804: sw $zero, 0x124($s1)
    *(uint32_t*)((s1) + 0x118) = v0;                            // 0x00175808: sw $v0, 0x118($s1)
    *(uint32_t*)((s1) + 0x114) = v0;                            // 0x0017580c: sw $v0, 0x114($s1)
    v0 = s1 + 0x1a4;                                            // 0x00175810: addiu $v0, $s1, 0x1a4
    /* nop */                                                   // 0x00175814: nop 
label_0x175818:
    v1 = v1 + -1;                                               // 0x00175818: addiu $v1, $v1, -1
    g_00170000 = 0;  // Global at 0x00170000                    // 0x0017581c: sw $zero, 0($v0)
    /* nop */                                                   // 0x00175820: nop 
    /* nop */                                                   // 0x00175824: nop 
    /* nop */                                                   // 0x00175828: nop 
    if (v1 >= 0) goto label_0x175818;                           // 0x0017582c: bgez $v1, 0x175818
    v0 = v0 + -4;                                               // 0x00175830: addiu $v0, $v0, -4
    v0 = 1;                                                     // 0x00175834: addiu $v0, $zero, 1
    *(uint32_t*)((s1) + 0x1ac) = 0;                             // 0x00175838: sw $zero, 0x1ac($s1)
    *(uint32_t*)((s1) + 0x1b0) = 0;                             // 0x0017583c: sw $zero, 0x1b0($s1)
    v1 = 0x1f;                                                  // 0x00175840: addiu $v1, $zero, 0x1f
    *(uint32_t*)((s1) + 0x1b4) = 0;                             // 0x00175844: sw $zero, 0x1b4($s1)
    *(uint32_t*)((s1) + 0x1a8) = v0;                            // 0x00175848: sw $v0, 0x1a8($s1)
    v0 = a0 + 0x22c;                                            // 0x0017584c: addiu $v0, $a0, 0x22c
label_0x175850:
    v1 = v1 + -1;                                               // 0x00175850: addiu $v1, $v1, -1
    g_0016fffc = 0;  // Global at 0x0016fffc                    // 0x00175854: sw $zero, 0($v0)
    /* nop */                                                   // 0x00175858: nop 
    /* nop */                                                   // 0x0017585c: nop 
    /* nop */                                                   // 0x00175860: nop 
    if (v1 >= 0) goto label_0x175850;                           // 0x00175864: bgez $v1, 0x175850
    v0 = v0 + -4;                                               // 0x00175868: addiu $v0, $v0, -4
    v0 = -1;                                                    // 0x0017586c: addiu $v0, $zero, -1
    *(uint32_t*)((s1) + 0x264) = 0;                             // 0x00175870: sw $zero, 0x264($s1)
    *(uint32_t*)((s1) + 0x288) = v0;                            // 0x00175874: sw $v0, 0x288($s1)
    v0 = -5;                                                    // 0x00175878: addiu $v0, $zero, -5
    at = 0xbf80 << 16;                                          // 0x0017587c: lui $at, 0xbf80
    /* move to FPU: $at, $f0 */                                 // 0x00175880: mtc1 $at, $f0
    a2 = 0x7fff << 16;                                          // 0x00175884: lui $a2, 0x7fff
    a3 = *(int32_t*)((s1) + 0x264);                             // 0x00175888: lw $a3, 0x264($s1)
    v1 = 1;                                                     // 0x0017588c: addiu $v1, $zero, 1
    a2 = a2 | 0xffff;                                           // 0x00175890: ori $a2, $a2, 0xffff
    a0 = 0x3e8;                                                 // 0x00175894: addiu $a0, $zero, 0x3e8
    a1 = 0x64;                                                  // 0x00175898: addiu $a1, $zero, 0x64
    *(uint32_t*)((s1) + 0x294) = v0;                            // 0x0017589c: sw $v0, 0x294($s1)
    *(uint32_t*)((s1) + 0x25c) = a2;                            // 0x001758a0: sw $a2, 0x25c($s1)
    *(uint32_t*)((s1) + 0x298) = 0;                             // 0x001758a4: sw $zero, 0x298($s1)
    *(uint32_t*)((s1) + 0x268) = a0;                            // 0x001758a8: sw $a0, 0x268($s1)
    *(uint32_t*)((s1) + 0x278) = a1;                            // 0x001758ac: sw $a1, 0x278($s1)
    *(float*)((s1) + 0x284) = FPU_F0;  // Store float           // 0x001758b0: swc1 $f0, 0x284($s1)
    *(uint32_t*)((s1) + 0x28c) = a3;                            // 0x001758b4: sw $a3, 0x28c($s1)
    *(uint32_t*)((s1) + 0x29c) = v1;                            // 0x001758b8: sw $v1, 0x29c($s1)
    *(uint32_t*)((s1) + 0x238) = v0;                            // 0x001758bc: sw $v0, 0x238($s1)
    *(uint32_t*)((s1) + 0x23c) = v1;                            // 0x001758c0: sw $v1, 0x23c($s1)
    *(uint32_t*)((s1) + 0x240) = v0;                            // 0x001758c4: sw $v0, 0x240($s1)
    *(uint32_t*)((s1) + 0x244) = v1;                            // 0x001758c8: sw $v1, 0x244($s1)
    *(uint32_t*)((s1) + 0x248) = v0;                            // 0x001758cc: sw $v0, 0x248($s1)
    *(uint32_t*)((s1) + 0x24c) = v1;                            // 0x001758d0: sw $v1, 0x24c($s1)
    *(uint32_t*)((s1) + 0x250) = v0;                            // 0x001758d4: sw $v0, 0x250($s1)
    *(uint32_t*)((s1) + 0x254) = a2;                            // 0x001758d8: sw $a2, 0x254($s1)
    *(uint32_t*)((s1) + 0x258) = 0;                             // 0x001758dc: sw $zero, 0x258($s1)
    *(uint32_t*)((s1) + 0x260) = 0;                             // 0x001758e0: sw $zero, 0x260($s1)
    *(uint32_t*)((s1) + 0x26c) = 0;                             // 0x001758e4: sw $zero, 0x26c($s1)
    *(uint32_t*)((s1) + 0x270) = 0;                             // 0x001758e8: sw $zero, 0x270($s1)
    *(uint32_t*)((s1) + 0x274) = v1;                            // 0x001758ec: sw $v1, 0x274($s1)
    *(float*)((s1) + 0x27c) = FPU_F0;  // Store float           // 0x001758f0: swc1 $f0, 0x27c($s1)
    *(uint32_t*)((s1) + 0x280) = 0;                             // 0x001758f4: sw $zero, 0x280($s1)
    *(uint32_t*)((s1) + 0x290) = 0;                             // 0x001758f8: sw $zero, 0x290($s1)
    return;                                                     // 0x00175908: jr $ra
    sp = sp + 0x20;                                             // 0x0017590c: addiu $sp, $sp, 0x20
}