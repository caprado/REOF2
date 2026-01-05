void func_00176c60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00176c60: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x00176c7c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00176c84: lui $a1, 0xff00
    a2 = s0 + 0xcc0;                                            // 0x00176c88: addiu $a2, $s0, 0xcc0
    if (v0 == 0) goto label_0x176cb0;                           // 0x00176c90: beqz $v0, 0x176cb0
    a1 = a1 | 0x125;                                            // 0x00176c94: ori $a1, $a1, 0x125
    return func_00169940();  // Tail call                        // 0x00176ca8: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00176cac: addiu $sp, $sp, 0x20
label_0x176cb0:
    v1 = *(int32_t*)((a2) + 0x26c);                             // 0x00176cb0: lw $v1, 0x26c($a2)
    a0 = 1;                                                     // 0x00176cb4: addiu $a0, $zero, 1
    *(uint32_t*)((a2) + 0x274) = s1;                            // 0x00176cb8: sw $s1, 0x274($a2)
    v1 = v1 + 1;                                                // 0x00176cbc: addiu $v1, $v1, 1
    *(uint32_t*)((a2) + 0x270) = s2;                            // 0x00176cc0: sw $s2, 0x270($a2)
    *(uint32_t*)((a2) + 0x26c) = v1;                            // 0x00176cc4: sw $v1, 0x26c($a2)
    *(uint32_t*)((s0) + 0x44) = a0;                             // 0x00176ccc: sw $a0, 0x44($s0)
    return;                                                     // 0x00176cdc: jr $ra
    sp = sp + 0x20;                                             // 0x00176ce0: addiu $sp, $sp, 0x20
}