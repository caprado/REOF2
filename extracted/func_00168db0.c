void func_00168db0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00168db0: addiu $sp, $sp, -0x20
    a3 = (a2 < 0x801) ? 1 : 0;                                  // 0x00168db4: slti $a3, $a2, 0x801
    s1 = s2 + 0x78;                                             // 0x00168dcc: addiu $s1, $s2, 0x78
    v1 = *(int32_t*)(s1);                                       // 0x00168dd4: lw $v1, 0($s1)
    if (v1 != 0) goto label_0x168e10;                           // 0x00168dd8: bnez $v1, 0x168e10
    a0 = s2 + 0x10c;                                            // 0x00168ddc: addiu $a0, $s2, 0x10c
    s0 = 0x800;                                                 // 0x00168de0: addiu $s0, $zero, 0x800
    if (a3 != 0) s0 = a2;                                       // 0x00168de4: movn $s0, $a2, $a3
    func_00155b20();  // 155b20                                // 0x00168de8: jal 0x155b20
    *(uint32_t*)((s1) + 0x90) = s0;                             // 0x00168df0: sw $s0, 0x90($s1)
    func_00168ff0();  // 168ff0                                // 0x00168df4: jal 0x168ff0
    func_00169610();  // 169610                                // 0x00168dfc: jal 0x169610
    func_00168e28();  // 168e28                                // 0x00168e04: jal 0x168e28
    v0 = 1;                                                     // 0x00168e0c: addiu $v0, $zero, 1
label_0x168e10:
    return;                                                     // 0x00168e20: jr $ra
    sp = sp + 0x20;                                             // 0x00168e24: addiu $sp, $sp, 0x20
}