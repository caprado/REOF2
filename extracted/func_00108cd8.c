void func_00108cd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x00108cd8: addiu $sp, $sp, -0x30
    func_001089b8();  // 1089b8                                // 0x00108cf4: jal 0x1089b8
    a1 = sp + 4;                                                // 0x00108cfc: addiu $a1, $sp, 4
    func_001089b8();  // 1089b8                                // 0x00108d04: jal 0x1089b8
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x00108d0c: lw $v1, 0x10($s0)
    a2 = *(int32_t*)((s1) + 0x10);                              // 0x00108d14: lw $a2, 0x10($s1)
    a0 = local_4;                                               // 0x00108d1c: lw $a0, 4($sp)
    v0 = local_0;                                               // 0x00108d24: lw $v0, 0($sp)
    v1 = v1 - a2;                                               // 0x00108d28: subu $v1, $v1, $a2
    v1 = v1 << 5;                                               // 0x00108d2c: sll $v1, $v1, 5
    v0 = v0 - a0;                                               // 0x00108d30: subu $v0, $v0, $a0
    v0 = v0 + v1;                                               // 0x00108d34: addu $v0, $v0, $v1
    a0 = v0 << 0x14;                                            // 0x00108d38: sll $a0, $v0, 0x14
    a1 = a1 + a0;                                               // 0x00108d40: addu $a1, $a1, $a0
    v1 = a3 - v1;                                               // 0x00108d44: subu $v1, $a3, $v1
    if (v0 <= 0) goto label_0x108d68;                           // 0x00108d48: blez $v0, 0x108d68
    v0 = 0xffff << 16;                                          // 0x00108d50: lui $v0, 0xffff
    s2 = s2 & v0;                                               // 0x00108d58: and $s2, $s2, $v0
    goto label_0x108d7c;                                        // 0x00108d5c: b 0x108d7c
    s2 = s2 | a1;                                               // 0x00108d60: or $s2, $s2, $a1
    /* nop */                                                   // 0x00108d64: nop 
label_0x108d68:
    v0 = 0xffff << 16;                                          // 0x00108d68: lui $v0, 0xffff
    t0 = t0 & v0;                                               // 0x00108d74: and $t0, $t0, $v0
    t0 = t0 | v1;                                               // 0x00108d78: or $t0, $t0, $v1
label_0x108d7c:
    func_00111ce0();  // 111ce0                                // 0x00108d84: jal 0x111ce0
    /* nop */                                                   // 0x00108d88: nop 
    return;                                                     // 0x00108d9c: jr $ra
    sp = sp + 0x30;                                             // 0x00108da0: addiu $sp, $sp, 0x30
}