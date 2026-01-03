void func_0017ffd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017ffd0: addiu $sp, $sp, -0x30
    v0 = 0x21 << 16;                                            // 0x0017ffd4: lui $v0, 0x21
    v1 = 0x26 << 16;                                            // 0x0017ffdc: lui $v1, 0x26
    s1 = v1 + 0x7908;                                           // 0x0017ffe4: addiu $s1, $v1, 0x7908
    g_00215fe0 = 0;  // Global at 0x00215fe0                    // 0x0017fff0: sw $zero, 0x5fe0($v0)
    /* nop */                                                   // 0x0017fff4: nop 
label_0x17fff8:
    v0 = g_00267908;  // Global at 0x00267908                   // 0x0017fff8: lw $v0, 0($s1)
    /* beqzl $v0, 0x180014 */                                   // 0x0017fffc: beqzl $v0, 0x180014
    s0 = s0 + 1;                                                // 0x00180000: addiu $s0, $s0, 1
    func_00180140();  // 180140                                // 0x00180004: jal 0x180140
    if (v0 < 0) goto label_0x180024;                            // 0x0018000c: bltz $v0, 0x180024
    s0 = s0 + 1;                                                // 0x00180010: addiu $s0, $s0, 1
    v0 = (s0 < 0x10) ? 1 : 0;                                   // 0x00180014: slti $v0, $s0, 0x10
    if (v0 != 0) goto label_0x17fff8;                           // 0x00180018: bnez $v0, 0x17fff8
    s1 = s1 + 0x334;                                            // 0x0018001c: addiu $s1, $s1, 0x334
    v0 = 1;                                                     // 0x00180020: addiu $v0, $zero, 1
label_0x180024:
    return;                                                     // 0x00180030: jr $ra
    sp = sp + 0x30;                                             // 0x00180034: addiu $sp, $sp, 0x30
}