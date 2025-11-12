void func_001afde0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1c;
    
    sp = sp + -0x20;                                            // 0x001afde0: addiu $sp, $sp, -0x20
    func_001d3d20();  // 0x1d3cb0                                // 0x001afde8: jal 0x1d3cb0
    local_1c = v0;                                              // 0x001afdf0: sw $v0, 0x1c($sp)
    v1 = local_1c;                                              // 0x001afdf4: lw $v1, 0x1c($sp)
    if (v1 == 0) goto label_0x1afe44;                           // 0x001afdf8: beqz $v1, 0x1afe44
    a0 = 4;                                                     // 0x001afdfc: addiu $a0, $zero, 4
    func_001aeb00();  // 0x1aea70                                // 0x001afe00: jal 0x1aea70
    a1 = 5;                                                     // 0x001afe04: addiu $a1, $zero, 5
    a0 = 0x63;                                                  // 0x001afe08: addiu $a0, $zero, 0x63
    func_001aefe0();  // 0x1aefd0                                // 0x001afe0c: jal 0x1aefd0
    a1 = 1 << 16;                                               // 0x001afe10: lui $a1, 1
    a0 = 0x6c;                                                  // 0x001afe14: addiu $a0, $zero, 0x6c
    func_001aefe0();  // 0x1aefd0                                // 0x001afe18: jal 0x1aefd0
    a0 = 1;                                                     // 0x001afe20: addiu $a0, $zero, 1
    func_0019d450();  // 0x19d440                                // 0x001afe24: jal 0x19d440
    a1 = sp + 0x1c;                                             // 0x001afe28: addiu $a1, $sp, 0x1c
    a1 = local_1c;                                              // 0x001afe2c: lw $a1, 0x1c($sp)
    func_001aefe0();  // 0x1aefd0                                // 0x001afe30: jal 0x1aefd0
    a0 = 4;                                                     // 0x001afe34: addiu $a0, $zero, 4
    a0 = 0x22 << 16;                                            // 0x001afe38: lui $a0, 0x22
    func_001ab530();  // 0x1ab230                                // 0x001afe3c: jal 0x1ab230
    a0 = a0 + -0x4040;                                          // 0x001afe40: addiu $a0, $a0, -0x4040
label_0x1afe44:
    return;                                                     // 0x001afe48: jr $ra
    sp = sp + 0x20;                                             // 0x001afe4c: addiu $sp, $sp, 0x20
}