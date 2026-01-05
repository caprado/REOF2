void func_0016eef0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_18, local_20, local_24;
    
    sp = sp + -0x50;                                            // 0x0016eef0: addiu $sp, $sp, -0x50
    s1 = s0 + 0xda4;                                            // 0x0016ef00: addiu $s1, $s0, 0xda4
    v0 = *(int32_t*)(s1);                                       // 0x0016ef0c: lw $v0, 0($s1)
    if (v0 != 0) goto label_0x16efe0;                           // 0x0016ef10: bnez $v0, 0x16efe0
    s2 = s0 + 0xcdc;                                            // 0x0016ef14: addiu $s2, $s0, 0xcdc
    a3 = *(int32_t*)((s0) + 0xd70);                             // 0x0016ef30: lw $a3, 0xd70($s0)
    local_18 = a3;                                              // 0x0016ef4c: sw $a3, 0x18($sp)
    func_0016e428();  // 16e428                                // 0x0016ef50: jal 0x16e428
    a1 = 3;                                                     // 0x0016ef54: addiu $a1, $zero, 3
    if (v0 != 0) goto label_0x16ef78;                           // 0x0016ef5c: bnez $v0, 0x16ef78
    a1 = 3;                                                     // 0x0016ef60: addiu $a1, $zero, 3
    func_0016e5a0();  // 16e5a0                                // 0x0016ef64: jal 0x16e5a0
    /* nop */                                                   // 0x0016ef68: nop 
    v1 = local_18;                                              // 0x0016ef6c: lw $v1, 0x18($sp)
    if (v0 == 0) v1 = 0;                                        // 0x0016ef70: movz $v1, $zero, $v0
    local_18 = v1;                                              // 0x0016ef74: sw $v1, 0x18($sp)
label_0x16ef78:
    a1 = sp + 0x20;                                             // 0x0016ef7c: addiu $a1, $sp, 0x20
    func_00176680();  // 176680                                // 0x0016ef80: jal 0x176680
    a2 = sp + 0x24;                                             // 0x0016ef84: addiu $a2, $sp, 0x24
    a1 = 1;                                                     // 0x0016ef88: addiu $a1, $zero, 1
    a2 = local_18;                                              // 0x0016efa4: lw $a2, 0x18($sp)
    *(uint32_t*)((s0) + 0xdc0) = a2;                            // 0x0016efc0: sw $a2, 0xdc0($s0)
    a0 = local_24;                                              // 0x0016efc4: lw $a0, 0x24($sp)
    v0 = local_20;                                              // 0x0016efc8: lw $v0, 0x20($sp)
    v1 = *(int32_t*)((s2) + 0x20);                              // 0x0016efcc: lw $v1, 0x20($s2)
    *(uint32_t*)(s1) = a1;                                      // 0x0016efd0: sw $a1, 0($s1)
    v0 = v0 - v1;                                               // 0x0016efd4: subu $v0, $v0, $v1
    *(uint32_t*)((s1) + 0x24) = a0;                             // 0x0016efd8: sw $a0, 0x24($s1)
    *(uint32_t*)((s1) + 0x20) = v0;                             // 0x0016efdc: sw $v0, 0x20($s1)
label_0x16efe0:
    return;                                                     // 0x0016eff0: jr $ra
    sp = sp + 0x50;                                             // 0x0016eff4: addiu $sp, $sp, 0x50
}