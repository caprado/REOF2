void func_0016dcf8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_18, local_20, local_24;
    
    sp = sp + -0x50;                                            // 0x0016dcf8: addiu $sp, $sp, -0x50
    s0 = s1 + 0xcdc;                                            // 0x0016dd0c: addiu $s0, $s1, 0xcdc
    v0 = *(int32_t*)(s0);                                       // 0x0016dd14: lw $v0, 0($s0)
    if (v0 != 0) goto label_0x16dd8c;                           // 0x0016dd18: bnez $v0, 0x16dd8c
    func_0016def0();  // 0x16deb0                                // 0x0016dd20: jal 0x16deb0
    /* nop */                                                   // 0x0016dd24: nop 
    a1 = sp + 0x20;                                             // 0x0016dd2c: addiu $a1, $sp, 0x20
    a2 = sp + 0x24;                                             // 0x0016dd30: addiu $a2, $sp, 0x24
    func_00176720();  // 0x176680                                // 0x0016dd34: jal 0x176680
    local_18 = 0;                                               // 0x0016dd38: sw $zero, 0x18($sp)
    v0 = 1;                                                     // 0x0016dd3c: addiu $v0, $zero, 1
    v1 = local_20;                                              // 0x0016dd40: lw $v1, 0x20($sp)
    a0 = local_24;                                              // 0x0016dd44: lw $a0, 0x24($sp)
    t0 = local_18;                                              // 0x0016dd60: lw $t0, 0x18($sp)
    *(uint32_t*)((s1) + 0xcf8) = t0;                            // 0x0016dd7c: sw $t0, 0xcf8($s1)
    *(uint32_t*)(s0) = v0;                                      // 0x0016dd80: sw $v0, 0($s0)
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x0016dd84: sw $v1, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = a0;                             // 0x0016dd88: sw $a0, 0x24($s0)
label_0x16dd8c:
    return;                                                     // 0x0016dd98: jr $ra
    sp = sp + 0x50;                                             // 0x0016dd9c: addiu $sp, $sp, 0x50
}