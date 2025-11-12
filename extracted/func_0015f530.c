void func_0015f530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015f530: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x0015f534: lui $v0, 0x21
    s0 = v0 + 0x5548;                                           // 0x0015f53c: addiu $s0, $v0, 0x5548
    v1 = g_00215548;  // Global at 0x00215548                   // 0x0015f540: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x15f590;                           // 0x0015f544: beqz $v1, 0x15f590
    func_0015f5c0();  // 0x15f5a0                                // 0x0015f54c: jal 0x15f5a0
    /* nop */                                                   // 0x0015f550: nop 
    a2 = 0x26 << 16;                                            // 0x0015f554: lui $a2, 0x26
    a2 = a2 + -0x2240;                                          // 0x0015f558: addiu $a2, $a2, -0x2240
    a1 = 0x4000;                                                // 0x0015f55c: addiu $a1, $zero, 0x4000
    func_0015f628();  // 0x15f5c0                                // 0x0015f560: jal 0x15f5c0
    func_0015f6d8();  // 0x15f690                                // 0x0015f568: jal 0x15f690
    a0 = 8;                                                     // 0x0015f56c: addiu $a0, $zero, 8
    a0 = 0x26 << 16;                                            // 0x0015f570: lui $a0, 0x26
    a0 = a0 + -0x6240;                                          // 0x0015f574: addiu $a0, $a0, -0x6240
    a1 = 0x4000;                                                // 0x0015f578: addiu $a1, $zero, 0x4000
    func_0015f690();  // 0x15f628                                // 0x0015f57c: jal 0x15f628
    func_0015f6d8();  // 0x15f690                                // 0x0015f584: jal 0x15f690
    a0 = 9;                                                     // 0x0015f588: addiu $a0, $zero, 9
    g_00215548 = 0;  // Global at 0x00215548                    // 0x0015f58c: sw $zero, 0($s0)
label_0x15f590:
    return;                                                     // 0x0015f598: jr $ra
    sp = sp + 0x10;                                             // 0x0015f59c: addiu $sp, $sp, 0x10
}