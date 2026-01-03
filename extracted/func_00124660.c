void func_00124660() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00124660: addiu $sp, $sp, -0x10
    if (s0 == 0) goto label_0x124694;                           // 0x0012466c: beqz $s0, 0x124694
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00124674: lw $a0, 8($s0)
    func_00134c18();  // 134c18                                // 0x00124678: jal 0x134c18
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0012467c: sw $zero, 8($s0)
    func_00107c70();  // 107c70                                // 0x00124688: jal 0x107c70
    a2 = 0xe4;                                                  // 0x0012468c: addiu $a2, $zero, 0xe4
    *(uint16_t*)(s0) = 0;                                       // 0x00124690: sh $zero, 0($s0)
label_0x124694:
    return;                                                     // 0x0012469c: jr $ra
    sp = sp + 0x10;                                             // 0x001246a0: addiu $sp, $sp, 0x10
}