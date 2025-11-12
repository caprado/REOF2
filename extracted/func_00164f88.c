void func_00164f88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00164f88: addiu $sp, $sp, -0x20
    func_00165e18();  // 0x165de8                                // 0x00164f9c: jal 0x165de8
    if (v1 == 0) goto label_0x164fc4;                           // 0x00164fa8: beqz $v1, 0x164fc4
    v0 = -1;                                                    // 0x00164fac: addiu $v0, $zero, -1
    a0 = *(int32_t*)((v1) + 0xc);                               // 0x00164fb0: lw $a0, 0xc($v1)
    *(uint32_t*)(s0) = a0;                                      // 0x00164fb8: sw $a0, 0($s0)
    v1 = *(int32_t*)((v1) + 0x10);                              // 0x00164fbc: lw $v1, 0x10($v1)
    *(uint32_t*)(s1) = v1;                                      // 0x00164fc0: sw $v1, 0($s1)
label_0x164fc4:
    return;                                                     // 0x00164fd0: jr $ra
    sp = sp + 0x20;                                             // 0x00164fd4: addiu $sp, $sp, 0x20
}