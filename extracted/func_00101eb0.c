void func_00101eb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00101eb0: addiu $sp, $sp, -0x20
    func_00101f80();  // 101f80                                // 0x00101ebc: jal 0x101f80
    v0 = (v1 < 4) ? 1 : 0;                                      // 0x00101ec8: slti $v0, $v1, 4
    if (v0 == 0) goto label_0x101ef0;                           // 0x00101ecc: beqz $v0, 0x101ef0
    if (v1 <= 0) goto label_0x101ef4;                           // 0x00101ed4: blez $v1, 0x101ef4
    func_00101fd0();  // 101fd0                                // 0x00101edc: jal 0x101fd0
    s0 = 1;                                                     // 0x00101ee0: addiu $s0, $zero, 1
    func_00101fc0();  // 101fc0                                // 0x00101ee4: jal 0x101fc0
label_0x101ef0:
label_0x101ef4:
    return;                                                     // 0x00101ef8: jr $ra
    sp = sp + 0x20;                                             // 0x00101efc: addiu $sp, $sp, 0x20
}