void func_0016cec0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016cec0: addiu $sp, $sp, -0x20
    s2 = s1 + 0xd2c;                                            // 0x0016ced4: addiu $s2, $s1, 0xd2c
    s0 = s1 + 0x1b28;                                           // 0x0016cedc: addiu $s0, $s1, 0x1b28
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0016cee0: lw $v0, 0x20($s0)
    if (v0 >= 0) goto label_0x16cefc;                           // 0x0016cee4: bgez $v0, 0x16cefc
    a1 = *(int32_t*)((s0) + 0x10);                              // 0x0016cee8: lw $a1, 0x10($s0)
    func_00167208();  // 0x1671e8                                // 0x0016ceec: jal 0x1671e8
    /* nop */                                                   // 0x0016cef0: nop 
    v0 = v0 + 4;                                                // 0x0016cef4: addiu $v0, $v0, 4
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x0016cef8: sw $v0, 0x20($s0)
label_0x16cefc:
    v0 = *(int32_t*)((s2) + 0x20);                              // 0x0016cefc: lw $v0, 0x20($s2)
    if (v0 >= 0) goto label_0x16cf58;                           // 0x0016cf00: bgez $v0, 0x16cf58
label_0x16cf58:
    return;                                                     // 0x0016cf64: jr $ra
    sp = sp + 0x20;                                             // 0x0016cf68: addiu $sp, $sp, 0x20
}