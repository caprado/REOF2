void func_0013b500() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013b500: addiu $sp, $sp, -0x10
    if (a3 != 0) goto label_0x13b528;                           // 0x0013b508: bnez $a3, 0x13b528
    a1 = 0x22 << 16;                                            // 0x0013b510: lui $a1, 0x22
    func_0013acb8();  // 0x13ac88                                // 0x0013b514: jal 0x13ac88
    a1 = &str_00225930;  // "E0092713:nsct < 0.(htCiReqRd)"     // 0x0013b518: addiu $a1, $a1, 0x5930
    goto label_0x13b588;                                        // 0x0013b51c: b 0x13b588
    /* nop */                                                   // 0x0013b524: nop 
label_0x13b528:
    if (a2 != 0) goto label_0x13b538;                           // 0x0013b528: bnez $a2, 0x13b538
    v0 = 2;                                                     // 0x0013b52c: addiu $v0, $zero, 2
    goto label_0x13b568;                                        // 0x0013b530: b 0x13b568
    *(uint32_t*)((a3) + 0x1c) = a1;                             // 0x0013b534: sw $a1, 0x1c($a3)
label_0x13b538:
    if (a2 != v0) goto label_0x13b550;                          // 0x0013b538: bne $a2, $v0, 0x13b550
    v0 = 1;                                                     // 0x0013b53c: addiu $v0, $zero, 1
    a0 = *(int32_t*)((a3) + 0x10);                              // 0x0013b540: lw $a0, 0x10($a3)
    v0 = a0 + a1;                                               // 0x0013b544: addu $v0, $a0, $a1
    goto label_0x13b56c;                                        // 0x0013b548: b 0x13b56c
    *(uint32_t*)((a3) + 0x1c) = v0;                             // 0x0013b54c: sw $v0, 0x1c($a3)
label_0x13b550:
    if (a2 != v0) goto label_0x13b56c;                          // 0x0013b550: bne $a2, $v0, 0x13b56c
    a0 = *(int32_t*)((a3) + 0x10);                              // 0x0013b554: lw $a0, 0x10($a3)
    v0 = *(int32_t*)((a3) + 0x1c);                              // 0x0013b558: lw $v0, 0x1c($a3)
    v0 = v0 + a1;                                               // 0x0013b55c: addu $v0, $v0, $a1
    goto label_0x13b56c;                                        // 0x0013b560: b 0x13b56c
    *(uint32_t*)((a3) + 0x1c) = v0;                             // 0x0013b564: sw $v0, 0x1c($a3)
label_0x13b568:
    a0 = *(int32_t*)((a3) + 0x10);                              // 0x0013b568: lw $a0, 0x10($a3)
label_0x13b56c:
    v0 = *(int32_t*)((a3) + 0x1c);                              // 0x0013b56c: lw $v0, 0x1c($a3)
    *(uint32_t*)((a3) + 0x28) = 0;                              // 0x0013b570: sw $zero, 0x28($a3)
    v1 = (v0 < a0) ? 1 : 0;                                     // 0x0013b574: slt $v1, $v0, $a0
    if (v1 == 0) v0 = a0;                                       // 0x0013b578: movz $v0, $a0, $v1
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x0013b57c: slti $a0, $v0, 0
    if (a0 != 0) v0 = 0;                                        // 0x0013b580: movn $v0, $zero, $a0
    *(uint32_t*)((a3) + 0x1c) = v0;                             // 0x0013b584: sw $v0, 0x1c($a3)
label_0x13b588:
    return;                                                     // 0x0013b58c: jr $ra
    sp = sp + 0x10;                                             // 0x0013b590: addiu $sp, $sp, 0x10
}