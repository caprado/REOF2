void func_0013e848() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013e848: addiu $sp, $sp, -0x10
    a0 = 0x22 << 16;                                            // 0x0013e84c: lui $a0, 0x22
    a0 = &str_002260a8;  // "PS2RNA_ClearBuf: not implemented\n" // 0x0013e854: addiu $a0, $a0, 0x60a8
    return func_00116598();  // Tail call                        // 0x0013e85c: j 0x116508
    sp = sp + 0x10;                                             // 0x0013e860: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013e864: nop 
    sp = sp + -0x10;                                            // 0x0013e868: addiu $sp, $sp, -0x10
    func_0013e910();  // 0x13e898                                // 0x0013e878: jal 0x13e898
    return func_0013e918();  // Tail call                        // 0x0013e890: j 0x13e910
    sp = sp + 0x10;                                             // 0x0013e894: addiu $sp, $sp, 0x10
    sp = sp + -0x30;                                            // 0x0013e898: addiu $sp, $sp, -0x30
    v0 = 1;                                                     // 0x0013e89c: addiu $v0, $zero, 1
    *(uint8_t*)((s1) + 0x50) = a1;                              // 0x0013e8b8: sb $a1, 0x50($s1)
    if (a1 == v0) goto label_0x13e8f4;                          // 0x0013e8bc: beq $a1, $v0, 0x13e8f4
    v1 = *(int8_t*)((s1) + 0x26);                               // 0x0013e8c0: lb $v1, 0x26($s1)
    if (v1 <= 0) goto label_0x13e8f8;                           // 0x0013e8c4: blez $v1, 0x13e8f8
    s3 = 1;                                                     // 0x0013e8d0: addiu $s3, $zero, 1
    s0 = s1 + 0x10;                                             // 0x0013e8d4: addiu $s0, $s1, 0x10
label_0x13e8d8:
    a0 = *(int32_t*)(s0);                                       // 0x0013e8d8: lw $a0, 0($s0)
    s0 = s0 + 4;                                                // 0x0013e8dc: addiu $s0, $s0, 4
    func_00138950();  // 0x1388a0                                // 0x0013e8e0: jal 0x1388a0
    s2 = s2 + -1;                                               // 0x0013e8e4: addiu $s2, $s2, -1
    *(uint8_t*)((s1) + 0x51) = s3;                              // 0x0013e8e8: sb $s3, 0x51($s1)
    if (s2 != 0) goto label_0x13e8d8;                           // 0x0013e8ec: bnez $s2, 0x13e8d8
    *(uint8_t*)((s1) + 0x50) = 0;                               // 0x0013e8f0: sb $zero, 0x50($s1)
label_0x13e8f4:
label_0x13e8f8:
    return;                                                     // 0x0013e908: jr $ra
    sp = sp + 0x30;                                             // 0x0013e90c: addiu $sp, $sp, 0x30
}