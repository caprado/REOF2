void func_001a77d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001a77d0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x001a77d8: dpa.w.ph $ac0, $sp, $s2
    if (s2 == 0) goto label_0x1a7804;                           // 0x001a77e4: beqz $s2, 0x1a7804
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001a77e8: addu.qb $zero, $sp, $s0
    SetOsdConfigParam();  // 0x114330                           // 0x001a77ec: jal 0x114330
    a0 = *(int32_t*)((gp) + -0x7d58);                           // 0x001a77f0: lw $a0, -0x7d58($gp)
    if (v0 >= 0) goto label_0x1a780c;                           // 0x001a77f4: bgez $v0, 0x1a780c
    /* nop */                                                   // 0x001a77f8: nop 
    goto label_0x1a78f4;                                        // 0x001a77fc: b 0x1a78f4
    v0 = -1;                                                    // 0x001a7800: addiu $v0, $zero, -1
label_0x1a7804:
    PollSema();  // 0x114320                                    // 0x001a7804: jal 0x114320
    a0 = *(int32_t*)((gp) + -0x7d58);                           // 0x001a7808: lw $a0, -0x7d58($gp)
label_0x1a780c:
    at = 0x2a << 16;                                            // 0x001a780c: lui $at, 0x2a
    goto label_0x1a7848;                                        // 0x001a7810: b 0x1a7848
    s1 = g_002a0f78;  // Global at 0x002a0f78                   // 0x001a7814: lw $s1, 0xf78($at)
label_0x1a7818:
    func_001a82b0();  // 0x1a7f00                                // 0x001a7818: jal 0x1a7f00
    if (v0 < 0) goto label_0x1a786c;                            // 0x001a7820: bltz $v0, 0x1a786c
    /* nop */                                                   // 0x001a7824: nop 
    v1 = -1;                                                    // 0x001a7828: addiu $v1, $zero, -1
    v0 = s1 + 1;                                                // 0x001a782c: addiu $v0, $s1, 1
    *(uint32_t*)(s0) = v1;                                      // 0x001a7830: sw $v1, 0($s0)
    if (v0 >= 0) goto label_0x1a7848;                           // 0x001a7834: bgez $v0, 0x1a7848
    s1 = v0 & 0x1f;                                             // 0x001a7838: andi $s1, $v0, 0x1f
    if (s1 == 0) goto label_0x1a7848;                           // 0x001a783c: beqz $s1, 0x1a7848
    /* nop */                                                   // 0x001a7840: nop 
    s1 = s1 + -0x20;                                            // 0x001a7844: addiu $s1, $s1, -0x20
label_0x1a7848:
    v1 = s1 << 1;                                               // 0x001a7848: sll $v1, $s1, 1
    v0 = 0x2a << 16;                                            // 0x001a784c: lui $v0, 0x2a
    v1 = v1 + s1;                                               // 0x001a7850: addu $v1, $v1, $s1
    v0 = v0 + 0xf80;                                            // 0x001a7854: addiu $v0, $v0, 0xf80
    v1 = v1 << 2;                                               // 0x001a7858: sll $v1, $v1, 2
    s0 = v0 + v1;                                               // 0x001a785c: addu $s0, $v0, $v1
    v0 = *(int32_t*)(s0);                                       // 0x001a7860: lw $v0, 0($s0)
    if (v0 >= 0) goto label_0x1a7818;                           // 0x001a7864: bgez $v0, 0x1a7818
    /* nop */                                                   // 0x001a7868: nop 
label_0x1a786c:
    at = 0x2a << 16;                                            // 0x001a786c: lui $at, 0x2a
    g_002a0f78 = s1;  // Global at 0x002a0f78                   // 0x001a7870: sw $s1, 0xf78($at)
    at = 0x2a << 16;                                            // 0x001a7874: lui $at, 0x2a
    v0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7878: lw $v0, 0xf68($at)
    if (v0 == 0) goto label_0x1a78e8;                           // 0x001a787c: beqz $v0, 0x1a78e8
    v1 = v0 + 0x10;                                             // 0x001a7880: addiu $v1, $v0, 0x10
    v0 = -0x10;                                                 // 0x001a7884: addiu $v0, $zero, -0x10
    if (s2 == 0) goto label_0x1a7894;                           // 0x001a7888: beqz $s2, 0x1a7894
    t0 = v1 & v0;                                               // 0x001a788c: and $t0, $v1, $v0
    s2 = 1;                                                     // 0x001a7890: addiu $s2, $zero, 1
label_0x1a7894:
    v0 = *(int32_t*)((gp) + -0x7d58);                           // 0x001a7894: lw $v0, -0x7d58($gp)
    a3 = 0x2a << 16;                                            // 0x001a7898: lui $a3, 0x2a
    a0 = 0x2a << 16;                                            // 0x001a789c: lui $a0, 0x2a
    a3 = a3 + 0x11c0;                                           // 0x001a78a0: addiu $a3, $a3, 0x11c0
    t3 = 0x1a << 16;                                            // 0x001a78a4: lui $t3, 0x1a
    a0 = a0 + 0x1130;                                           // 0x001a78ac: addiu $a0, $a0, 0x1130
    t3 = t3 + 0x7960;                                           // 0x001a78bc: addiu $t3, $t3, 0x7960
    func_001178a0();  // 0x1176a8                                // 0x001a78c0: jal 0x1176a8
    if (v0 >= 0) goto label_0x1a78e0;                           // 0x001a78c8: bgez $v0, 0x1a78e0
    at = 0x2a << 16;                                            // 0x001a78cc: lui $at, 0x2a
    iSignalSema();  // 0x114300                                 // 0x001a78d0: jal 0x114300
    a0 = *(int32_t*)((gp) + -0x7d58);                           // 0x001a78d4: lw $a0, -0x7d58($gp)
    goto label_0x1a78f4;                                        // 0x001a78d8: b 0x1a78f4
    v0 = -1;                                                    // 0x001a78dc: addiu $v0, $zero, -1
label_0x1a78e0:
    goto label_0x1a78f0;                                        // 0x001a78e0: b 0x1a78f0
    g_002a0f68 = 0;  // Global at 0x002a0f68                    // 0x001a78e4: sw $zero, 0xf68($at)
label_0x1a78e8:
    iSignalSema();  // 0x114300                                 // 0x001a78e8: jal 0x114300
    a0 = *(int32_t*)((gp) + -0x7d58);                           // 0x001a78ec: lw $a0, -0x7d58($gp)
label_0x1a78f0:
label_0x1a78f4:
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001a78fc: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001a7900: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001a7904: jr $ra
    sp = sp + 0x50;                                             // 0x001a7908: addiu $sp, $sp, 0x50
}