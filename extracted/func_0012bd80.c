void func_0012bd80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4, local_8, local_c;
    
    sp = sp + -0x30;                                            // 0x0012bd80: addiu $sp, $sp, -0x30
    if (v0 == 0) goto label_0x12bdc8;                           // 0x0012bd88: beqz $v0, 0x12bdc8
    a2 = *(int32_t*)((v0) + 8);                                 // 0x0012bd90: lw $a2, 8($v0)
    a3 = 0x19;                                                  // 0x0012bd94: addiu $a3, $zero, 0x19
    a0 = *(int32_t*)((v0) + 0xc);                               // 0x0012bd98: lw $a0, 0xc($v0)
    v1 = *(int32_t*)(v0);                                       // 0x0012bda0: lw $v1, 0($v0)
    a1 = a2 + 1;                                                // 0x0012bda4: addiu $a1, $a2, 1
    v0 = *(int32_t*)((v0) + 4);                                 // 0x0012bda8: lw $v0, 4($v0)
    local_10 = a0;                                              // 0x0012bdac: sw $a0, 0x10($sp)
    local_0 = v1;                                               // 0x0012bdb0: sw $v1, 0($sp)
    local_4 = v0;                                               // 0x0012bdb4: sw $v0, 4($sp)
    local_c = a1;                                               // 0x0012bdb8: sw $a1, 0xc($sp)
    local_14 = a3;                                              // 0x0012bdbc: sw $a3, 0x14($sp)
    goto label_0x12bdcc;                                        // 0x0012bdc0: b 0x12bdcc
    local_8 = a2;                                               // 0x0012bdc4: sw $a2, 8($sp)
label_0x12bdc8:
label_0x12bdcc:
    func_0012b2f8();  // 12b2f8                                // 0x0012bdcc: jal 0x12b2f8
    return;                                                     // 0x0012bdd8: jr $ra
    sp = sp + 0x30;                                             // 0x0012bddc: addiu $sp, $sp, 0x30
}