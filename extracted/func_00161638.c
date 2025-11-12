void func_00161638() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00161638: addiu $sp, $sp, -0x10
    func_00161580();  // 0x161570                                // 0x00161644: jal 0x161570
    v1 = 1;                                                     // 0x0016164c: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x161660;                          // 0x00161650: bnel $v0, $v1, 0x161660
    v1 = *(int32_t*)((s0) + 0xe8);                              // 0x00161654: lw $v1, 0xe8($s0)
    goto label_0x161688;                                        // 0x00161658: b 0x161688
label_0x161660:
    if (v1 == 0) goto label_0x161688;                           // 0x00161664: beqz $v1, 0x161688
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x0016166c: lw $a0, 0x40($s0)
    a1 = 2;                                                     // 0x00161670: addiu $a1, $zero, 2
    func_001786f0();  // 0x1785d0                                // 0x00161674: jal 0x1785d0
    v1 = -1;                                                    // 0x0016167c: addiu $v1, $zero, -1
    if (v0 == 0) v1 = 0;                                        // 0x00161680: movz $v1, $zero, $v0
label_0x161688:
    return;                                                     // 0x00161690: jr $ra
    sp = sp + 0x10;                                             // 0x00161694: addiu $sp, $sp, 0x10
}