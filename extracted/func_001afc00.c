void func_001afc00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001afc00: addiu $sp, $sp, -0x20
    v0 = *(uint8_t*)((a0) + 2);                                 // 0x001afc0c: lbu $v0, 2($a0)
    if (v0 == 0) goto label_0x1afc20;                           // 0x001afc10: beqz $v0, 0x1afc20
    goto label_0x1afc4c;                                        // 0x001afc18: b 0x1afc4c
label_0x1afc20:
    func_001afb10();  // 1afb10                                // 0x001afc20: jal 0x1afb10
    /* nop */                                                   // 0x001afc24: nop 
    v1 = 1;                                                     // 0x001afc28: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1afc48;                          // 0x001afc2c: bne $v0, $v1, 0x1afc48
    /* nop */                                                   // 0x001afc30: nop 
    v0 = *(uint8_t*)((s0) + 3);                                 // 0x001afc34: lbu $v0, 3($s0)
    if (v0 == 0) goto label_0x1afc4c;                           // 0x001afc38: beqz $v0, 0x1afc4c
    goto label_0x1afc4c;                                        // 0x001afc40: b 0x1afc4c
label_0x1afc48:
label_0x1afc4c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001afc50: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001afc54: jr $ra
    sp = sp + 0x20;                                             // 0x001afc58: addiu $sp, $sp, 0x20
}