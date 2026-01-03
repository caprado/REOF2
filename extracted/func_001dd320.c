void func_001dd320() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x38;                                                  // 0x001dd320: addiu $v0, $zero, 0x38
    v1 = 0x33 << 16;                                            // 0x001dd324: lui $v1, 0x33
    sp = sp + -0x90;                                            // 0x001dd32c: addiu $sp, $sp, -0x90
    t2 = g_0032fec4;  // Global at 0x0032fec4                   // 0x001dd330: lw $t2, -0x13c($v1)
    s7 = a1 & 0xff;                                             // 0x001dd33c: andi $s7, $a1, 0xff
    s6 = a2 & 0xff;                                             // 0x001dd344: andi $s6, $a2, 0xff
    s3 = t2 + a0;                                               // 0x001dd35c: addu $s3, $t2, $a0
    v1 = *(int32_t*)((s3) + 4);                                 // 0x001dd370: lw $v1, 4($s3)
    if (v1 == 0) goto label_0x1dd390;                           // 0x001dd374: beqz $v1, 0x1dd390
    v0 = 1;                                                     // 0x001dd37c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1dd3e0;                          // 0x001dd380: beq $v1, $v0, 0x1dd3e0
    goto label_0x1dd444;                                        // 0x001dd388: b 0x1dd444
label_0x1dd390:
    if (s4 <= 0) goto label_0x1dd438;                           // 0x001dd390: blez $s4, 0x1dd438
    v0 = *(uint16_t*)(s2);                                      // 0x001dd398: lhu $v0, 0($s2)
    if (v0 == 0) goto label_0x1dd438;                           // 0x001dd39c: beqz $v0, 0x1dd438
    v0 = s0 + s2;                                               // 0x001dd3a4: addu $v0, $s0, $s2
    a0 = s0 + s5;                                               // 0x001dd3a8: addu $a0, $s0, $s5
    /* nop */                                                   // 0x001dd3ac: nop 
label_0x1dd3b0:
    v1 = *(uint16_t*)(v0);                                      // 0x001dd3b0: lhu $v1, 0($v0)
    s1 = s1 + 1;                                                // 0x001dd3b4: addiu $s1, $s1, 1
    v0 = (s1 < s4) ? 1 : 0;                                     // 0x001dd3b8: slt $v0, $s1, $s4
    if (v0 == 0) goto label_0x1dd438;                           // 0x001dd3bc: beqz $v0, 0x1dd438
    *(uint16_t*)(a0) = v1;                                      // 0x001dd3c0: sh $v1, 0($a0)
    s0 = s1 << 1;                                               // 0x001dd3c4: sll $s0, $s1, 1
    v0 = s0 + s2;                                               // 0x001dd3c8: addu $v0, $s0, $s2
    v1 = *(uint16_t*)(v0);                                      // 0x001dd3cc: lhu $v1, 0($v0)
    if (v1 != 0) goto label_0x1dd3b0;                           // 0x001dd3d0: bnez $v1, 0x1dd3b0
    a0 = s0 + s5;                                               // 0x001dd3d4: addu $a0, $s0, $s5
    goto label_0x1dd43c;                                        // 0x001dd3d8: b 0x1dd43c
label_0x1dd3e0:
    if (s4 <= 0) goto label_0x1dd438;                           // 0x001dd3e0: blez $s4, 0x1dd438
    v0 = *(uint16_t*)(s2);                                      // 0x001dd3e8: lhu $v0, 0($s2)
    if (v0 == 0) goto label_0x1dd438;                           // 0x001dd3ec: beqz $v0, 0x1dd438
    v0 = s0 + s2;                                               // 0x001dd3f4: addu $v0, $s0, $s2
label_0x1dd3f8:
    a0 = *(int32_t*)((s3) + 8);                                 // 0x001dd3f8: lw $a0, 8($s3)
    a3 = *(uint16_t*)(v0);                                      // 0x001dd3fc: lhu $a3, 0($v0)
    func_001dd470();  // 1dd470                                // 0x001dd408: jal 0x1dd470
    s1 = s1 + 1;                                                // 0x001dd40c: addiu $s1, $s1, 1
    v1 = s0 + s5;                                               // 0x001dd410: addu $v1, $s0, $s5
    a0 = (s1 < s4) ? 1 : 0;                                     // 0x001dd414: slt $a0, $s1, $s4
    if (a0 == 0) goto label_0x1dd438;                           // 0x001dd418: beqz $a0, 0x1dd438
    g_00330000 = v0;  // Global at 0x00330000                   // 0x001dd41c: sh $v0, 0($v1)
    v0 = s1 << 1;                                               // 0x001dd420: sll $v0, $s1, 1
    v1 = s0 + s2;                                               // 0x001dd428: addu $v1, $s0, $s2
    v0 = g_00330000;  // Global at 0x00330000                   // 0x001dd42c: lhu $v0, 0($v1)
    if (v0 != 0) goto label_0x1dd3f8;                           // 0x001dd430: bnez $v0, 0x1dd3f8
    v0 = s0 + s2;                                               // 0x001dd434: addu $v0, $s0, $s2
label_0x1dd438:
label_0x1dd43c:
label_0x1dd444:
    return;                                                     // 0x001dd464: jr $ra
    sp = sp + 0x90;                                             // 0x001dd468: addiu $sp, $sp, 0x90
}