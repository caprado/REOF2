void func_0013d4c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013d4c0: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x0013d4d4: lw $v0, 0x28($s0)
    if (v0 != 0) goto label_0x13d500;                           // 0x0013d4d8: bnez $v0, 0x13d500
    a0 = 0x22 << 16;                                            // 0x0013d4e0: lui $a0, 0x22
    a0 = &str_00225d18;  // "\nPS2RNA Ver 1.21 Build:Jul 28 2003 17:50:11\n" // 0x0013d4ec: addiu $a0, $a0, 0x5d18
    return func_0013d248();  // Tail call                        // 0x0013d4f4: j 0x13d1b8
    sp = sp + 0x20;                                             // 0x0013d4f8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0013d4fc: nop 
label_0x13d500:
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0013d500: lw $v0, 0x20($s0)
    v0 = v0 << 5;                                               // 0x0013d504: sll $v0, $v0, 5
    v0 = s0 + v0;                                               // 0x0013d508: addu $v0, $s0, $v0
    func_00130280();  // 0x130278                                // 0x0013d50c: jal 0x130278
    s1 = v0 + 0x38;                                             // 0x0013d510: addiu $s1, $v0, 0x38
    v0 = 4;                                                     // 0x0013d518: addiu $v0, $zero, 4
    if (v1 != v0) goto label_0x13d530;                          // 0x0013d51c: bne $v1, $v0, 0x13d530
    a0 = 2;                                                     // 0x0013d520: addiu $a0, $zero, 2
    v0 = 3;                                                     // 0x0013d524: addiu $v0, $zero, 3
    goto label_0x13d55c;                                        // 0x0013d528: b 0x13d55c
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x0013d52c: sb $v0, 1($s0)
label_0x13d530:
    if (v1 != a0) goto label_0x13d548;                          // 0x0013d530: bne $v1, $a0, 0x13d548
    v0 = 3;                                                     // 0x0013d534: addiu $v0, $zero, 3
    func_001302e0();  // 0x1302c8                                // 0x0013d538: jal 0x1302c8
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0013d53c: lw $a0, 0x28($s0)
    goto label_0x13d55c;                                        // 0x0013d540: b 0x13d55c
    *(uint32_t*)((s1) + 0x1c) = v0;                             // 0x0013d544: sw $v0, 0x1c($s1)
label_0x13d548:
    if (v1 != v0) goto label_0x13d560;                          // 0x0013d548: bnel $v1, $v0, 0x13d560
    v0 = *(int32_t*)((s0) + 0x2c);                              // 0x0013d550: lw $v0, 0x2c($s0)
    *(uint32_t*)((s1) + 0x18) = a0;                             // 0x0013d554: sw $a0, 0x18($s1)
    *(uint32_t*)((s1) + 0x1c) = v0;                             // 0x0013d558: sw $v0, 0x1c($s1)
label_0x13d55c:
label_0x13d560:
    return;                                                     // 0x0013d568: jr $ra
    sp = sp + 0x20;                                             // 0x0013d56c: addiu $sp, $sp, 0x20
}