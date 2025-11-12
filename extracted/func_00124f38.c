void func_00124f38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00124f38: addiu $sp, $sp, -0x10
    v1 = 3;                                                     // 0x00124f3c: addiu $v1, $zero, 3
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00124f4c: lw $v0, 4($s0)
    if (v0 != v1) goto label_0x124f6c;                          // 0x00124f50: bnel $v0, $v1, 0x124f6c
    func_00134d20();  // 0x134d08                                // 0x00124f58: jal 0x134d08
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00124f5c: lw $a0, 8($s0)
    *(uint32_t*)((s0) + 0x8c) = 0;                              // 0x00124f60: sw $zero, 0x8c($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00124f64: sw $zero, 4($s0)
label_0x124f6c:
    return;                                                     // 0x00124f70: jr $ra
    sp = sp + 0x10;                                             // 0x00124f74: addiu $sp, $sp, 0x10
}