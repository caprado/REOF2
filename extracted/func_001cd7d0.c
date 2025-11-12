void func_001cd7d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xc0;                                            // 0x001cd7d0: addiu $sp, $sp, -0xc0
    at = 0x32 << 16;                                            // 0x001cd7d4: lui $at, 0x32
    v1 = 7;                                                     // 0x001cd7dc: addiu $v1, $zero, 7
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001cd7e0: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001cd7e8: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001cd7f0: dpa.w.ph $ac0, $sp, $s3
    s4 = 0x32 << 16;                                            // 0x001cd7f4: lui $s4, 0x32
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cd7fc: addu.qb $zero, $sp, $s1
    a0 = g_003257d6;  // Global at 0x003257d6                   // 0x001cd804: lbu $a0, 0x57d6($at)
    if (a0 != v1) goto label_0x1cdefc;                          // 0x001cd808: bne $a0, $v1, 0x1cdefc
    s4 = s4 + 0x57b0;                                           // 0x001cd80c: addiu $s4, $s4, 0x57b0
    goto label_0x1cdf08;                                        // 0x001cd810: b 0x1cdf08
label_0x1cd818:
    v0 = g_003257bc;  // Global at 0x003257bc                   // 0x001cd818: lw $v0, 0xc($s4)
label_0x1cd81c:
    if (v0 != 0) goto label_0x1cd864;                           // 0x001cd81c: bnez $v0, 0x1cd864
    /* nop */                                                   // 0x001cd820: nop 
    a0 = g_003257b8;  // Global at 0x003257b8                   // 0x001cd824: lw $a0, 8($s4)
    func_001d03a0();  // 0x1d01e0                                // 0x001cd828: jal 0x1d01e0
    a1 = g_003257c0;  // Global at 0x003257c0                   // 0x001cd82c: lh $a1, 0x10($s4)
    if (v0 <= 0) goto label_0x1cd864;                           // 0x001cd830: blez $v0, 0x1cd864
    /* nop */                                                   // 0x001cd834: nop 
    at = 0x32 << 16;                                            // 0x001cd838: lui $at, 0x32
    v1 = 0x32 << 16;                                            // 0x001cd83c: lui $v1, 0x32
    FPU_F0 = *(float*)((at) + 0x57ec);  // Load float           // 0x001cd840: lwc1 $f0, 0x57ec($at)
    v1 = v1 + 0x57d0;                                           // 0x001cd844: addiu $v1, $v1, 0x57d0
    at = 0x32 << 16;                                            // 0x001cd848: lui $at, 0x32
    a1 = g_003257d4;  // Global at 0x003257d4                   // 0x001cd84c: lbu $a1, 0x57d4($at)
    a0 = a1 << 4;                                               // 0x001cd850: sll $a0, $a1, 4
    a0 = a0 - a1;                                               // 0x001cd854: subu $a0, $a0, $a1
    a0 = a0 << 2;                                               // 0x001cd858: sll $a0, $a0, 2
    v1 = v1 + a0;                                               // 0x001cd85c: addu $v1, $v1, $a0
    *(float*)((v1) + 0x54) = FPU_F0;  // Store float            // 0x001cd860: swc1 $f0, 0x54($v1)
label_0x1cd864:
    if (v0 == 0) goto label_0x1cde28;                           // 0x001cd864: beqz $v0, 0x1cde28
    if (v0 <= 0) goto label_0x1cdde8;                           // 0x001cd86c: blez $v0, 0x1cdde8
    g_003257bc = v0;  // Global at 0x003257bc                   // 0x001cd874: sw $v0, 0xc($s4)
    at = 0x32 << 16;                                            // 0x001cd878: lui $at, 0x32
    a2 = g_00325810;  // Global at 0x00325810                   // 0x001cd87c: lw $a2, 0x5810($at)
    a0 = 0x32 << 16;                                            // 0x001cd880: lui $a0, 0x32
    a1 = v0 & 0xffff;                                           // 0x001cd884: andi $a1, $v0, 0xffff
    a0 = a0 + 0x57b0;                                           // 0x001cd888: addiu $a0, $a0, 0x57b0
    at = 0x32 << 16;                                            // 0x001cd88c: lui $at, 0x32
    a2 = a2 + v0;                                               // 0x001cd890: addu $a2, $a2, $v0
    v1 = g_00325816;  // Global at 0x00325816                   // 0x001cd894: lhu $v1, 0x5816($at)
    at = 0x32 << 16;                                            // 0x001cd898: lui $at, 0x32
    v0 = v1 + a1;                                               // 0x001cd89c: addu $v0, $v1, $a1
    g_00325810 = a2;  // Global at 0x00325810                   // 0x001cd8a0: sw $a2, 0x5810($at)
    at = 0x32 << 16;                                            // 0x001cd8a4: lui $at, 0x32
    func_001ce780();  // 0x1ce750                                // 0x001cd8a8: jal 0x1ce750
    g_00325816 = v0;  // Global at 0x00325816                   // 0x001cd8ac: sh $v0, 0x5816($at)
    goto label_0x1cddb8;                                        // 0x001cd8b0: b 0x1cddb8
    /* nop */                                                   // 0x001cd8b4: nop 
label_0x1cd8b8:
    a1 = 0x32 << 16;                                            // 0x001cd8b8: lui $a1, 0x32
    a0 = sp + 0x90;                                             // 0x001cd8bc: addiu $a0, $sp, 0x90
    func_001ce6b0();  // 0x1ce6a0                                // 0x001cd8c0: jal 0x1ce6a0
    a1 = a1 + 0x57b0;                                           // 0x001cd8c4: addiu $a1, $a1, 0x57b0
    thunk_func_001cffa0();  // 0x1ce810                          // 0x001cd8c8: jal 0x1ce810
    a0 = sp + 0x90;                                             // 0x001cd8cc: addiu $a0, $sp, 0x90
    s3 = v0 & 0xff;                                             // 0x001cd8d0: andi $s3, $v0, 0xff
    thunk_func_001cffa0();  // 0x1ce810                          // 0x001cd8d4: jal 0x1ce810
    a0 = sp + 0x90;                                             // 0x001cd8d8: addiu $a0, $sp, 0x90
    v0 = v0 & 0xff;                                             // 0x001cd8dc: andi $v0, $v0, 0xff
    s1 = v0 & 0xf;                                              // 0x001cd8e0: andi $s1, $v0, 0xf
    if (s1 < 0) goto label_0x1cd900;                            // 0x001cd8e4: bltz $s1, 0x1cd900
    s2 = v0 & 0xf0;                                             // 0x001cd8e8: andi $s2, $v0, 0xf0
    at = 0x32 << 16;                                            // 0x001cd8ec: lui $at, 0x32
    v0 = g_003257d5;  // Global at 0x003257d5                   // 0x001cd8f0: lbu $v0, 0x57d5($at)
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x001cd8f4: slt $v0, $s1, $v0
    if (v0 != 0) goto label_0x1cd94c;                           // 0x001cd8f8: bnez $v0, 0x1cd94c
    v0 = 0x60;                                                  // 0x001cd8fc: addiu $v0, $zero, 0x60
label_0x1cd900:
    a0 = 5;                                                     // 0x001cd900: addiu $a0, $zero, 5
    func_001cdfc0();  // 0x1cdf70                                // 0x001cd908: jal 0x1cdf70
    at = 0x32 << 16;                                            // 0x001cd910: lui $at, 0x32
    v1 = 0x15;                                                  // 0x001cd914: addiu $v1, $zero, 0x15
    a0 = g_00325938;  // Global at 0x00325938                   // 0x001cd918: lhu $a0, 0x5938($at)
    at = 0x32 << 16;                                            // 0x001cd91c: lui $at, 0x32
    g_00325930 = v1;  // Global at 0x00325930                   // 0x001cd920: sw $v1, 0x5930($at)
    v1 = *(int32_t*)((gp) + -0x7b94);                           // 0x001cd924: lw $v1, -0x7b94($gp)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001cd928: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1cdf04;                           // 0x001cd92c: bnez $v1, 0x1cdf04
    /* nop */                                                   // 0x001cd930: nop 
    v1 = 0x10;                                                  // 0x001cd934: addiu $v1, $zero, 0x10
    at = 0x32 << 16;                                            // 0x001cd938: lui $at, 0x32
    g_00325930 = v1;  // Global at 0x00325930                   // 0x001cd93c: sw $v1, 0x5930($at)
    goto label_0x1cdf04;                                        // 0x001cd940: b 0x1cdf04
    /* nop */                                                   // 0x001cd944: nop 
    v0 = 0x60;                                                  // 0x001cd948: addiu $v0, $zero, 0x60
label_0x1cd94c:
    if (s2 == v0) goto label_0x1cd9ec;                          // 0x001cd94c: beq $s2, $v0, 0x1cd9ec
    v0 = 0x60;                                                  // 0x001cd950: addiu $v0, $zero, 0x60
    at = 0x32 << 16;                                            // 0x001cd954: lui $at, 0x32
    v0 = g_003257d4;  // Global at 0x003257d4                   // 0x001cd958: lbu $v0, 0x57d4($at)
    if (s1 != v0) goto label_0x1cd9b0;                          // 0x001cd95c: bne $s1, $v0, 0x1cd9b0
    v1 = s1 << 4;                                               // 0x001cd960: sll $v1, $s1, 4
    a0 = 5;                                                     // 0x001cd964: addiu $a0, $zero, 5
    func_001cdfc0();  // 0x1cdf70                                // 0x001cd96c: jal 0x1cdf70
    at = 0x32 << 16;                                            // 0x001cd974: lui $at, 0x32
    v1 = 0x15;                                                  // 0x001cd978: addiu $v1, $zero, 0x15
    a0 = g_00325938;  // Global at 0x00325938                   // 0x001cd97c: lhu $a0, 0x5938($at)
    at = 0x32 << 16;                                            // 0x001cd980: lui $at, 0x32
    g_00325930 = v1;  // Global at 0x00325930                   // 0x001cd984: sw $v1, 0x5930($at)
    v1 = *(int32_t*)((gp) + -0x7b94);                           // 0x001cd988: lw $v1, -0x7b94($gp)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001cd98c: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1cdf04;                           // 0x001cd990: bnez $v1, 0x1cdf04
    /* nop */                                                   // 0x001cd994: nop 
    v1 = 0x10;                                                  // 0x001cd998: addiu $v1, $zero, 0x10
    at = 0x32 << 16;                                            // 0x001cd99c: lui $at, 0x32
    g_00325930 = v1;  // Global at 0x00325930                   // 0x001cd9a0: sw $v1, 0x5930($at)
    goto label_0x1cdf04;                                        // 0x001cd9a4: b 0x1cdf04
    /* nop */                                                   // 0x001cd9a8: nop 
    v1 = s1 << 4;                                               // 0x001cd9ac: sll $v1, $s1, 4
label_0x1cd9b0:
    v0 = 0x32 << 16;                                            // 0x001cd9b0: lui $v0, 0x32
    v1 = v1 - s1;                                               // 0x001cd9b4: subu $v1, $v1, $s1
    v0 = v0 + 0x57d0;                                           // 0x001cd9b8: addiu $v0, $v0, 0x57d0
    v1 = v1 << 2;                                               // 0x001cd9bc: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001cd9c0: addu $v0, $v0, $v1
    v0 = g_0032581c;  // Global at 0x0032581c                   // 0x001cd9c4: lbu $v0, 0x4c($v0)
    if (v0 != 0) goto label_0x1cd9e8;                           // 0x001cd9c8: bnez $v0, 0x1cd9e8
    /* nop */                                                   // 0x001cd9cc: nop 
    a0 = 0x32 << 16;                                            // 0x001cd9d0: lui $a0, 0x32
    a1 = s3 & 0xff;                                             // 0x001cd9d4: andi $a1, $s3, 0xff
    thunk_func_001cffd0();  // 0x1ce8a0                          // 0x001cd9d8: jal 0x1ce8a0
    a0 = a0 + 0x57b0;                                           // 0x001cd9dc: addiu $a0, $a0, 0x57b0
    goto label_0x1cddb8;                                        // 0x001cd9e0: b 0x1cddb8
    /* nop */                                                   // 0x001cd9e4: nop 
label_0x1cd9e8:
    v0 = 0x60;                                                  // 0x001cd9e8: addiu $v0, $zero, 0x60
label_0x1cd9ec:
    if (s2 == v0) goto label_0x1cda28;                          // 0x001cd9ec: beq $s2, $v0, 0x1cda28
    v0 = 0x80;                                                  // 0x001cd9f0: addiu $v0, $zero, 0x80
    v1 = s1 << 4;                                               // 0x001cd9f4: sll $v1, $s1, 4
    v0 = 0x32 << 16;                                            // 0x001cd9f8: lui $v0, 0x32
    v1 = v1 - s1;                                               // 0x001cd9fc: subu $v1, $v1, $s1
    v0 = v0 + 0x57d0;                                           // 0x001cda00: addiu $v0, $v0, 0x57d0
    v1 = v1 << 2;                                               // 0x001cda04: sll $v1, $v1, 2
    at = 0x32 << 16;                                            // 0x001cda08: lui $at, 0x32
    v1 = v0 + v1;                                               // 0x001cda0c: addu $v1, $v0, $v1
    v0 = g_00325820;  // Global at 0x00325820                   // 0x001cda10: lw $v0, 0x50($v1)
    v0 = v0 + 1;                                                // 0x001cda14: addiu $v0, $v0, 1
    g_00325820 = v0;  // Global at 0x00325820                   // 0x001cda18: sw $v0, 0x50($v1)
    FPU_F0 = *(float*)((at) + 0x57ec);  // Load float           // 0x001cda1c: lwc1 $f0, 0x57ec($at)
    *(float*)((v1) + 0x54) = FPU_F0;  // Store float            // 0x001cda20: swc1 $f0, 0x54($v1)
    v0 = 0x80;                                                  // 0x001cda24: addiu $v0, $zero, 0x80
label_0x1cda28:
    if (s2 == v0) goto label_0x1cdd20;                          // 0x001cda28: beq $s2, $v0, 0x1cdd20
    v0 = s1 << 4;                                               // 0x001cda2c: sll $v0, $s1, 4
    v0 = 0x70;                                                  // 0x001cda30: addiu $v0, $zero, 0x70
    if (s2 == v0) goto label_0x1cdd1c;                          // 0x001cda34: beq $s2, $v0, 0x1cdd1c
    /* nop */                                                   // 0x001cda38: nop 
    v0 = 0x50;                                                  // 0x001cda3c: addiu $v0, $zero, 0x50
    if (s2 == v0) goto label_0x1cdcbc;                          // 0x001cda40: beq $s2, $v0, 0x1cdcbc
    v1 = s1 << 4;                                               // 0x001cda44: sll $v1, $s1, 4
    v0 = 0x40;                                                  // 0x001cda48: addiu $v0, $zero, 0x40
    if (s2 == v0) goto label_0x1cdcb8;                          // 0x001cda4c: beq $s2, $v0, 0x1cdcb8
    /* nop */                                                   // 0x001cda50: nop 
    v0 = 0x30;                                                  // 0x001cda54: addiu $v0, $zero, 0x30
    if (s2 == v0) goto label_0x1cdc00;                          // 0x001cda58: beq $s2, $v0, 0x1cdc00
    /* nop */                                                   // 0x001cda5c: nop 
    v0 = 0x20;                                                  // 0x001cda60: addiu $v0, $zero, 0x20
    if (s2 == v0) goto label_0x1cdb98;                          // 0x001cda64: beq $s2, $v0, 0x1cdb98
    s0 = s3 & 0xff;                                             // 0x001cda68: andi $s0, $s3, 0xff
    v0 = 0x90;                                                  // 0x001cda6c: addiu $v0, $zero, 0x90
    if (s2 == v0) goto label_0x1cdb00;                          // 0x001cda70: beq $s2, $v0, 0x1cdb00
    a0 = sp + 0x90;                                             // 0x001cda74: addiu $a0, $sp, 0x90
    v0 = 0x60;                                                  // 0x001cda78: addiu $v0, $zero, 0x60
    if (s2 == v0) goto label_0x1cda9c;                          // 0x001cda7c: beq $s2, $v0, 0x1cda9c
    a0 = sp + 0x90;                                             // 0x001cda80: addiu $a0, $sp, 0x90
    v0 = 0xf0;                                                  // 0x001cda84: addiu $v0, $zero, 0xf0
    if (s2 == v0) goto label_0x1cdda8;                          // 0x001cda88: beq $s2, $v0, 0x1cdda8
    /* nop */                                                   // 0x001cda8c: nop 
    goto label_0x1cdda8;                                        // 0x001cda90: b 0x1cdda8
    /* nop */                                                   // 0x001cda94: nop 
    a0 = sp + 0x90;                                             // 0x001cda98: addiu $a0, $sp, 0x90
label_0x1cda9c:
    thunk_func_001cff10();  // 0x1ce7c0                          // 0x001cdaa0: jal 0x1ce7c0
    a2 = 2;                                                     // 0x001cdaa4: addiu $a2, $zero, 2
    a0 = sp + 0x90;                                             // 0x001cdaa8: addiu $a0, $sp, 0x90
    thunk_func_001cff10();  // 0x1ce7c0                          // 0x001cdab0: jal 0x1ce7c0
    a2 = 2;                                                     // 0x001cdab4: addiu $a2, $zero, 2
    v1 = *(uint16_t*)(s7);                                      // 0x001cdab8: lhu $v1, 0($s7)
    v0 = 0x1021;                                                // 0x001cdabc: addiu $v0, $zero, 0x1021
    a0 = v1 << 8;                                               // 0x001cdac0: sll $a0, $v1, 8
    v1 = v1 >> 8;                                               // 0x001cdac4: sra $v1, $v1, 8
    a0 = a0 & 0xff00;                                           // 0x001cdac8: andi $a0, $a0, 0xff00
    v1 = v1 & 0xff;                                             // 0x001cdacc: andi $v1, $v1, 0xff
    v1 = a0 | v1;                                               // 0x001cdad0: or $v1, $a0, $v1
    if (v1 == v0) goto label_0x1cdaf4;                          // 0x001cdad4: beq $v1, $v0, 0x1cdaf4
    v0 = 1;                                                     // 0x001cdad8: addiu $v0, $zero, 1
    v0 = 0x1032;                                                // 0x001cdadc: addiu $v0, $zero, 0x1032
    if (v1 == v0) goto label_0x1cdda8;                          // 0x001cdae0: beq $v1, $v0, 0x1cdda8
    /* nop */                                                   // 0x001cdae4: nop 
    goto label_0x1cdda8;                                        // 0x001cdae8: b 0x1cdda8
    /* nop */                                                   // 0x001cdaec: nop 
    v0 = 1;                                                     // 0x001cdaf0: addiu $v0, $zero, 1
label_0x1cdaf4:
    goto label_0x1cdda8;                                        // 0x001cdaf4: b 0x1cdda8
    *(uint32_t*)((gp) + -0x62d0) = v0;                          // 0x001cdaf8: sw $v0, -0x62d0($gp)
    a0 = sp + 0x90;                                             // 0x001cdafc: addiu $a0, $sp, 0x90
label_0x1cdb00:
    thunk_func_001cffa0();  // 0x1ce810                          // 0x001cdb00: jal 0x1ce810
    /* nop */                                                   // 0x001cdb04: nop 
    a0 = v0 & 0xff;                                             // 0x001cdb08: andi $a0, $v0, 0xff
    if (a0 == 0) goto label_0x1cdb50;                           // 0x001cdb0c: beqz $a0, 0x1cdb50
    /* nop */                                                   // 0x001cdb10: nop 
    v0 = 4;                                                     // 0x001cdb14: addiu $v0, $zero, 4
    if (a0 == v0) goto label_0x1cdb2c;                          // 0x001cdb18: beq $a0, $v0, 0x1cdb2c
    v1 = s1 << 4;                                               // 0x001cdb1c: sll $v1, $s1, 4
    goto label_0x1cdb64;                                        // 0x001cdb20: b 0x1cdb64
    v1 = 1;                                                     // 0x001cdb24: addiu $v1, $zero, 1
    v1 = s1 << 4;                                               // 0x001cdb28: sll $v1, $s1, 4
label_0x1cdb2c:
    v0 = 0x32 << 16;                                            // 0x001cdb2c: lui $v0, 0x32
    v1 = v1 - s1;                                               // 0x001cdb30: subu $v1, $v1, $s1
    v0 = v0 + 0x57d0;                                           // 0x001cdb34: addiu $v0, $v0, 0x57d0
    v1 = v1 << 2;                                               // 0x001cdb38: sll $v1, $v1, 2
    v1 = v0 + v1;                                               // 0x001cdb3c: addu $v1, $v0, $v1
    v0 = g_0032581e;  // Global at 0x0032581e                   // 0x001cdb40: lbu $v0, 0x4e($v1)
    v0 = v0 + 1;                                                // 0x001cdb44: addiu $v0, $v0, 1
    goto label_0x1cdda8;                                        // 0x001cdb48: b 0x1cdda8
    g_0032581e = v0;  // Global at 0x0032581e                   // 0x001cdb4c: sb $v0, 0x4e($v1)
label_0x1cdb50:
    func_001ce310();  // 0x1ce240                                // 0x001cdb50: jal 0x1ce240
    a0 = 1;                                                     // 0x001cdb54: addiu $a0, $zero, 1
    goto label_0x1cdda8;                                        // 0x001cdb58: b 0x1cdda8
    /* nop */                                                   // 0x001cdb5c: nop 
    v1 = 1;                                                     // 0x001cdb60: addiu $v1, $zero, 1
label_0x1cdb64:
    v0 = s1 << 4;                                               // 0x001cdb64: sll $v0, $s1, 4
    v1 = v1 << a0;                                              // 0x001cdb68: sllv $v1, $v1, $a0
    v0 = v0 - s1;                                               // 0x001cdb6c: subu $v0, $v0, $s1
    a0 = v1 & 0xff;                                             // 0x001cdb70: andi $a0, $v1, 0xff
    v1 = v0 << 2;                                               // 0x001cdb74: sll $v1, $v0, 2
    v0 = 0x32 << 16;                                            // 0x001cdb78: lui $v0, 0x32
    v0 = v0 + 0x57d0;                                           // 0x001cdb7c: addiu $v0, $v0, 0x57d0
    v1 = v0 + v1;                                               // 0x001cdb80: addu $v1, $v0, $v1
    v0 = g_0032581d;  // Global at 0x0032581d                   // 0x001cdb84: lbu $v0, 0x4d($v1)
    v0 = v0 | a0;                                               // 0x001cdb88: or $v0, $v0, $a0
    goto label_0x1cdda8;                                        // 0x001cdb8c: b 0x1cdda8
    g_0032581d = v0;  // Global at 0x0032581d                   // 0x001cdb90: sb $v0, 0x4d($v1)
    s0 = s3 & 0xff;                                             // 0x001cdb94: andi $s0, $s3, 0xff
label_0x1cdb98:
    a0 = 0x32 << 16;                                            // 0x001cdb98: lui $a0, 0x32
    v0 = s0 + 1;                                                // 0x001cdb9c: addiu $v0, $s0, 1
    a0 = a0 + 0x4f90;                                           // 0x001cdba0: addiu $a0, $a0, 0x4f90
    thunk_func_001cff70();  // 0x1ce7e0                          // 0x001cdba4: jal 0x1ce7e0
    a1 = v0 & 0xff;                                             // 0x001cdba8: andi $a1, $v0, 0xff
    at = 0x32 << 16;                                            // 0x001cdbac: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001cdbb0: lui $a0, 0x32
    v0 = g_003257d4;  // Global at 0x003257d4                   // 0x001cdbb4: lbu $v0, 0x57d4($at)
    a0 = a0 + 0x4f90;                                           // 0x001cdbb8: addiu $a0, $a0, 0x4f90
    v0 = v0 & 0xf;                                              // 0x001cdbbc: andi $v0, $v0, 0xf
    v0 = v0 | 0x30;                                             // 0x001cdbc0: ori $v0, $v0, 0x30
    thunk_func_001cff70();  // 0x1ce7e0                          // 0x001cdbc4: jal 0x1ce7e0
    a1 = v0 & 0xff;                                             // 0x001cdbc8: andi $a1, $v0, 0xff
    a0 = 0x32 << 16;                                            // 0x001cdbcc: lui $a0, 0x32
    a1 = s1 & 0xff;                                             // 0x001cdbd0: andi $a1, $s1, 0xff
    thunk_func_001cff70();  // 0x1ce7e0                          // 0x001cdbd4: jal 0x1ce7e0
    a0 = a0 + 0x4f90;                                           // 0x001cdbd8: addiu $a0, $a0, 0x4f90
    func_001ce700();  // 0x1ce6f0                                // 0x001cdbdc: jal 0x1ce6f0
    a0 = sp + 0x90;                                             // 0x001cdbe0: addiu $a0, $sp, 0x90
    a0 = 0x32 << 16;                                            // 0x001cdbe4: lui $a0, 0x32
    a2 = s0 + -2;                                               // 0x001cdbe8: addiu $a2, $s0, -2
    func_001cfdf0();  // 0x1cfd80                                // 0x001cdbf0: jal 0x1cfd80
    a0 = a0 + 0x4f90;                                           // 0x001cdbf4: addiu $a0, $a0, 0x4f90
    goto label_0x1cdda8;                                        // 0x001cdbf8: b 0x1cdda8
    /* nop */                                                   // 0x001cdbfc: nop 
label_0x1cdc00:
    at = 0x32 << 16;                                            // 0x001cdc00: lui $at, 0x32
    s0 = g_003257d4;  // Global at 0x003257d4                   // 0x001cdc04: lbu $s0, 0x57d4($at)
    thunk_func_001cffa0();  // 0x1ce810                          // 0x001cdc08: jal 0x1ce810
    a0 = sp + 0x90;                                             // 0x001cdc0c: addiu $a0, $sp, 0x90
    v0 = v0 & 0xff;                                             // 0x001cdc10: andi $v0, $v0, 0xff
    if (s0 != v0) goto label_0x1cdda8;                          // 0x001cdc14: bne $s0, $v0, 0x1cdda8
    /* nop */                                                   // 0x001cdc18: nop 
    thunk_func_001cffa0();  // 0x1ce810                          // 0x001cdc1c: jal 0x1ce810
    a0 = sp + 0x90;                                             // 0x001cdc20: addiu $a0, $sp, 0x90
    s0 = v0 & 0xff;                                             // 0x001cdc24: andi $s0, $v0, 0xff
    func_001ce830();  // 0x1ce820                                // 0x001cdc28: jal 0x1ce820
    a0 = sp + 0x90;                                             // 0x001cdc2c: addiu $a0, $sp, 0x90
    at = 0x32 << 16;                                            // 0x001cdc30: lui $at, 0x32
    v0 = s1 << 4;                                               // 0x001cdc34: sll $v0, $s1, 4
    FPU_F3 = *(float*)((at) + 0x57ec);  // Load float           // 0x001cdc38: lwc1 $f3, 0x57ec($at)
    v1 = v0 - s1;                                               // 0x001cdc3c: subu $v1, $v0, $s1
    a0 = v1 << 2;                                               // 0x001cdc40: sll $a0, $v1, 2
    v0 = 0x32 << 16;                                            // 0x001cdc44: lui $v0, 0x32
    v1 = 0x447a << 16;                                          // 0x001cdc48: lui $v1, 0x447a
    v0 = v0 + 0x57d0;                                           // 0x001cdc4c: addiu $v0, $v0, 0x57d0
    a0 = v0 + a0;                                               // 0x001cdc50: addu $a0, $v0, $a0
    v0 = 0x4f00 << 16;                                          // 0x001cdc54: lui $v0, 0x4f00
    /* move to FPU: $v1, $f2 */                                 // 0x001cdc58: mtc1 $v1, $f2
    /* nop */                                                   // 0x001cdc5c: nop 
    /* FPU: sub.s $f0, $f3, $f0 */                              // 0x001cdc60: sub.s $f0, $f3, $f0
    /* FPU: mul.s $f0, $f2, $f0 */                              // 0x001cdc64: mul.s $f0, $f2, $f0
    /* move to FPU: $v0, $f1 */                                 // 0x001cdc68: mtc1 $v0, $f1
    /* nop */                                                   // 0x001cdc6c: nop 
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001cdc70: c.ole.s $f1, $f0
    /* bc1t 0x1cdc8c */                                         // 0x001cdc74: bc1t 0x1cdc8c
    /* nop */                                                   // 0x001cdc78: nop 
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001cdc7c: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x001cdc80: mfc1 $v1, $f0
    goto label_0x1cdca8;                                        // 0x001cdc84: b 0x1cdca8
    v0 = s0 << 1;                                               // 0x001cdc88: sll $v0, $s0, 1
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x001cdc8c: sub.s $f0, $f0, $f1
    v0 = 0x8000 << 16;                                          // 0x001cdc90: lui $v0, 0x8000
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001cdc94: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x001cdc98: mfc1 $v1, $f0
    /* nop */                                                   // 0x001cdc9c: nop 
    v1 = v1 | v0;                                               // 0x001cdca0: or $v1, $v1, $v0
    v0 = s0 << 1;                                               // 0x001cdca4: sll $v0, $s0, 1
label_0x1cdca8:
    v0 = a0 + v0;                                               // 0x001cdca8: addu $v0, $a0, $v0
    g_8000005e = v1;  // Global at 0x8000005e                   // 0x001cdcac: sh $v1, 0x5e($v0)
    goto label_0x1cdda8;                                        // 0x001cdcb0: b 0x1cdda8
    g_00324fec = s0;  // Global at 0x00324fec                   // 0x001cdcb4: sb $s0, 0x5c($a0)
label_0x1cdcb8:
    v1 = s1 << 4;                                               // 0x001cdcb8: sll $v1, $s1, 4
label_0x1cdcbc:
    v0 = 0x32 << 16;                                            // 0x001cdcbc: lui $v0, 0x32
    v1 = v1 - s1;                                               // 0x001cdcc0: subu $v1, $v1, $s1
    a0 = 0x32 << 16;                                            // 0x001cdcc4: lui $a0, 0x32
    v0 = v0 + 0x57d0;                                           // 0x001cdcc8: addiu $v0, $v0, 0x57d0
    v1 = v1 << 2;                                               // 0x001cdccc: sll $v1, $v1, 2
    s0 = v0 + v1;                                               // 0x001cdcd0: addu $s0, $v0, $v1
    a0 = a0 + 0x57b0;                                           // 0x001cdcd4: addiu $a0, $a0, 0x57b0
    v0 = *(int32_t*)((s0) + 0x58);                              // 0x001cdcd8: lw $v0, 0x58($s0)
    v0 = v0 + 1;                                                // 0x001cdcdc: addiu $v0, $v0, 1
    func_001ce700();  // 0x1ce6f0                                // 0x001cdce0: jal 0x1ce6f0
    *(uint32_t*)((s0) + 0x58) = v0;                             // 0x001cdce4: sw $v0, 0x58($s0)
    a2 = s3 & 0xff;                                             // 0x001cdcec: andi $a2, $s3, 0xff
    v0 = s1 << 1;                                               // 0x001cdcf0: sll $v0, $s1, 1
    v1 = v0 + s1;                                               // 0x001cdcf4: addu $v1, $v0, $s1
    v0 = 0x32 << 16;                                            // 0x001cdcf8: lui $v0, 0x32
    v1 = v1 << 3;                                               // 0x001cdcfc: sll $v1, $v1, 3
    v0 = v0 + -0x950;                                           // 0x001cdd00: addiu $v0, $v0, -0x950
    thunk_func_001cfdf0();  // 0x1ce7b0                          // 0x001cdd04: jal 0x1ce7b0
    a0 = v0 + v1;                                               // 0x001cdd08: addu $a0, $v0, $v1
    v0 = *(int32_t*)((s0) + 0x74);                              // 0x001cdd0c: lw $v0, 0x74($s0)
    v0 = v0 + 1;                                                // 0x001cdd10: addiu $v0, $v0, 1
    goto label_0x1cdda8;                                        // 0x001cdd14: b 0x1cdda8
    *(uint32_t*)((s0) + 0x74) = v0;                             // 0x001cdd18: sw $v0, 0x74($s0)
label_0x1cdd1c:
    v0 = s1 << 4;                                               // 0x001cdd1c: sll $v0, $s1, 4
label_0x1cdd20:
    v1 = 0x32 << 16;                                            // 0x001cdd20: lui $v1, 0x32
    v0 = v0 - s1;                                               // 0x001cdd24: subu $v0, $v0, $s1
    v1 = v1 + 0x57d0;                                           // 0x001cdd28: addiu $v1, $v1, 0x57d0
    a0 = v0 << 2;                                               // 0x001cdd2c: sll $a0, $v0, 2
    s6 = s3 & 0xff;                                             // 0x001cdd30: andi $s6, $s3, 0xff
    s0 = v1 + a0;                                               // 0x001cdd34: addu $s0, $v1, $a0
    v0 = s1 << 1;                                               // 0x001cdd38: sll $v0, $s1, 1
    a2 = *(int32_t*)((s0) + 0x58);                              // 0x001cdd3c: lw $a2, 0x58($s0)
    v0 = v0 + s1;                                               // 0x001cdd40: addu $v0, $v0, $s1
    a0 = v0 << 3;                                               // 0x001cdd44: sll $a0, $v0, 3
    v1 = 0x32 << 16;                                            // 0x001cdd48: lui $v1, 0x32
    v0 = s6 + -1;                                               // 0x001cdd4c: addiu $v0, $s6, -1
    v1 = v1 + -0x950;                                           // 0x001cdd50: addiu $v1, $v1, -0x950
    a1 = v0 & 0xff;                                             // 0x001cdd54: andi $a1, $v0, 0xff
    s5 = v1 + a0;                                               // 0x001cdd58: addu $s5, $v1, $a0
    v0 = a2 + 1;                                                // 0x001cdd60: addiu $v0, $a2, 1
    thunk_func_001cff70();  // 0x1ce7e0                          // 0x001cdd64: jal 0x1ce7e0
    *(uint32_t*)((s0) + 0x58) = v0;                             // 0x001cdd68: sw $v0, 0x58($s0)
    v0 = s2 + -0x30;                                            // 0x001cdd6c: addiu $v0, $s2, -0x30
    v0 = v0 | s1;                                               // 0x001cdd74: or $v0, $v0, $s1
    thunk_func_001cff70();  // 0x1ce7e0                          // 0x001cdd78: jal 0x1ce7e0
    a1 = v0 & 0xff;                                             // 0x001cdd7c: andi $a1, $v0, 0xff
    a0 = 0x32 << 16;                                            // 0x001cdd80: lui $a0, 0x32
    func_001ce700();  // 0x1ce6f0                                // 0x001cdd84: jal 0x1ce6f0
    a0 = a0 + 0x57b0;                                           // 0x001cdd88: addiu $a0, $a0, 0x57b0
    a2 = s6 + -3;                                               // 0x001cdd8c: addiu $a2, $s6, -3
    thunk_func_001cfdf0();  // 0x1ce7b0                          // 0x001cdd94: jal 0x1ce7b0
    a1 = v0 + 2;                                                // 0x001cdd98: addiu $a1, $v0, 2
    v0 = *(int32_t*)((s0) + 0x74);                              // 0x001cdd9c: lw $v0, 0x74($s0)
    v0 = v0 + 1;                                                // 0x001cdda0: addiu $v0, $v0, 1
    *(uint32_t*)((s0) + 0x74) = v0;                             // 0x001cdda4: sw $v0, 0x74($s0)
label_0x1cdda8:
    a0 = 0x32 << 16;                                            // 0x001cdda8: lui $a0, 0x32
    a1 = s3 & 0xff;                                             // 0x001cddac: andi $a1, $s3, 0xff
    thunk_func_001cffd0();  // 0x1ce8a0                          // 0x001cddb0: jal 0x1ce8a0
    a0 = a0 + 0x57b0;                                           // 0x001cddb4: addiu $a0, $a0, 0x57b0
label_0x1cddb8:
    a0 = 0x32 << 16;                                            // 0x001cddb8: lui $a0, 0x32
    func_001ce6d0();  // 0x1ce6c0                                // 0x001cddbc: jal 0x1ce6c0
    a0 = a0 + 0x57b0;                                           // 0x001cddc0: addiu $a0, $a0, 0x57b0
    if (v0 != 0) goto label_0x1cd8b8;                           // 0x001cddc4: bnez $v0, 0x1cd8b8
    /* nop */                                                   // 0x001cddc8: nop 
    a0 = 0x32 << 16;                                            // 0x001cddcc: lui $a0, 0x32
    a1 = -1;                                                    // 0x001cddd0: addiu $a1, $zero, -1
    func_001ce8a0();  // 0x1ce830                                // 0x001cddd4: jal 0x1ce830
    a0 = a0 + 0x57b0;                                           // 0x001cddd8: addiu $a0, $a0, 0x57b0
    goto label_0x1cd81c;                                        // 0x001cdddc: b 0x1cd81c
    v0 = g_003257bc;  // Global at 0x003257bc                   // 0x001cdde0: lw $v0, 0xc($s4)
label_0x1cdde8:
    a0 = 2;                                                     // 0x001cdde8: addiu $a0, $zero, 2
    func_001cdfc0();  // 0x1cdf70                                // 0x001cddec: jal 0x1cdf70
    at = 0x32 << 16;                                            // 0x001cddf4: lui $at, 0x32
    v0 = 3;                                                     // 0x001cddf8: addiu $v0, $zero, 3
    v1 = g_00325938;  // Global at 0x00325938                   // 0x001cddfc: lhu $v1, 0x5938($at)
    at = 0x32 << 16;                                            // 0x001cde00: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cde04: sw $v0, 0x5930($at)
    v0 = *(int32_t*)((gp) + -0x7b94);                           // 0x001cde08: lw $v0, -0x7b94($gp)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001cde0c: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1cde24;                           // 0x001cde10: bnez $v0, 0x1cde24
    /* nop */                                                   // 0x001cde14: nop 
    v0 = 0x10;                                                  // 0x001cde18: addiu $v0, $zero, 0x10
    at = 0x32 << 16;                                            // 0x001cde1c: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cde20: sw $v0, 0x5930($at)
label_0x1cde24:
label_0x1cde28:
    goto label_0x1cdec0;                                        // 0x001cde28: b 0x1cdec0
    /* nop */                                                   // 0x001cde2c: nop 
label_0x1cde30:
    at = 0x32 << 16;                                            // 0x001cde30: lui $at, 0x32
    v0 = g_003257d4;  // Global at 0x003257d4                   // 0x001cde34: lbu $v0, 0x57d4($at)
    if (s0 == v0) goto label_0x1cdebc;                          // 0x001cde38: beq $s0, $v0, 0x1cdebc
    /* nop */                                                   // 0x001cde3c: nop 
    v0 = s0 << 4;                                               // 0x001cde40: sll $v0, $s0, 4
    v1 = 0x32 << 16;                                            // 0x001cde44: lui $v1, 0x32
    a0 = v0 - s0;                                               // 0x001cde48: subu $a0, $v0, $s0
    v1 = v1 + 0x57d0;                                           // 0x001cde4c: addiu $v1, $v1, 0x57d0
    a0 = a0 << 2;                                               // 0x001cde50: sll $a0, $a0, 2
    v0 = 1;                                                     // 0x001cde54: addiu $v0, $zero, 1
    a1 = v1 + a0;                                               // 0x001cde58: addu $a1, $v1, $a0
    v1 = g_0031f6ff;  // Global at 0x0031f6ff                   // 0x001cde5c: lbu $v1, 0x4c($a1)
    if (v1 != v0) goto label_0x1cdebc;                          // 0x001cde60: bne $v1, $v0, 0x1cdebc
    a0 = a1 + 0x4c;                                             // 0x001cde64: addiu $a0, $a1, 0x4c
    at = 0x32 << 16;                                            // 0x001cde68: lui $at, 0x32
    FPU_F2 = *(float*)((a1) + 0x54);  // Load float             // 0x001cde6c: lwc1 $f2, 0x54($a1)
    FPU_F1 = *(float*)((at) + 0x57ec);  // Load float           // 0x001cde70: lwc1 $f1, 0x57ec($at)
    FPU_F0 = *(float*)((gp) + -0x7b98);  // Load float          // 0x001cde74: lwc1 $f0, -0x7b98($gp)
    /* FPU: sub.s $f1, $f1, $f2 */                              // 0x001cde78: sub.s $f1, $f1, $f2
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001cde7c: c.ole.s $f1, $f0
    /* bc1t 0x1cdebc */                                         // 0x001cde80: bc1t 0x1cdebc
    /* nop */                                                   // 0x001cde84: nop 
    g_0031f6ff = 0;  // Global at 0x0031f6ff                    // 0x001cde88: sb $zero, 0($a0)
    at = 0x32 << 16;                                            // 0x001cde8c: lui $at, 0x32
    v0 = g_003257df;  // Global at 0x003257df                   // 0x001cde90: lbu $v0, 0x57df($at)
    v0 = v0 + -1;                                               // 0x001cde94: addiu $v0, $v0, -1
    at = 0x32 << 16;                                            // 0x001cde98: lui $at, 0x32
    func_001cd0b0();  // 0x1cd050                                // 0x001cde9c: jal 0x1cd050
    g_003257df = v0;  // Global at 0x003257df                   // 0x001cdea0: sb $v0, 0x57df($at)
    at = 0x32 << 16;                                            // 0x001cdea4: lui $at, 0x32
    g_003257de = v0;  // Global at 0x003257de                   // 0x001cdea8: sb $v0, 0x57de($at)
    at = 0x32 << 16;                                            // 0x001cdeac: lui $at, 0x32
    a1 = g_003257de;  // Global at 0x003257de                   // 0x001cdeb0: lbu $a1, 0x57de($at)
    func_001ce600();  // 0x1ce550                                // 0x001cdeb4: jal 0x1ce550
    a0 = s0 & 0xff;                                             // 0x001cdeb8: andi $a0, $s0, 0xff
label_0x1cdebc:
    s0 = s0 + 1;                                                // 0x001cdebc: addiu $s0, $s0, 1
label_0x1cdec0:
    at = 0x32 << 16;                                            // 0x001cdec0: lui $at, 0x32
    v0 = g_003257d5;  // Global at 0x003257d5                   // 0x001cdec4: lbu $v0, 0x57d5($at)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x001cdec8: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x1cde30;                           // 0x001cdecc: bnez $v0, 0x1cde30
    /* nop */                                                   // 0x001cded0: nop 
label_0x1cded4:
    func_001cd550();  // 0x1cd0b0                                // 0x001cded4: jal 0x1cd0b0
    /* nop */                                                   // 0x001cded8: nop 
    /* nop */                                                   // 0x001cdedc: nop 
    /* nop */                                                   // 0x001cdee0: nop 
    /* nop */                                                   // 0x001cdee4: nop 
    /* nop */                                                   // 0x001cdee8: nop 
    if (v0 != 0) goto label_0x1cded4;                           // 0x001cdeec: bnez $v0, 0x1cded4
    /* nop */                                                   // 0x001cdef0: nop 
    goto label_0x1cdf04;                                        // 0x001cdef4: b 0x1cdf04
    /* nop */                                                   // 0x001cdef8: nop 
label_0x1cdefc:
    goto label_0x1cd818;                                        // 0x001cdefc: b 0x1cd818
    s7 = sp + 0xb2;                                             // 0x001cdf00: addiu $s7, $sp, 0xb2
label_0x1cdf04:
label_0x1cdf08:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001cdf0c: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001cdf10: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001cdf14: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cdf1c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cdf20: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cdf24: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cdf28: jr $ra
    sp = sp + 0xc0;                                             // 0x001cdf2c: addiu $sp, $sp, 0xc0
}