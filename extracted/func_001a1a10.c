void func_001a1a10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a1a10: addiu $sp, $sp, -0x10
    func_001a1a10();  // 0x1a1a00                                // 0x001a1a18: jal 0x1a1a00
    /* nop */                                                   // 0x001a1a1c: nop 
    a0 = v0 + 0x14;                                             // 0x001a1a20: addiu $a0, $v0, 0x14
    goto label_0x1a1a40;                                        // 0x001a1a28: b 0x1a1a40
    v0 = v0 + 0x14;                                             // 0x001a1a2c: addiu $v0, $v0, 0x14
label_0x1a1a30:
    v0 = *(int32_t*)((v0) + 8);                                 // 0x001a1a30: lw $v0, 8($v0)
    a2 = a2 + 1;                                                // 0x001a1a34: addiu $a2, $a2, 1
    a0 = a0 + v0;                                               // 0x001a1a38: addu $a0, $a0, $v0
label_0x1a1a40:
    v1 = (a2 < a1) ? 1 : 0;                                     // 0x001a1a40: slt $v1, $a2, $a1
    if (v1 != 0) goto label_0x1a1a30;                           // 0x001a1a44: bnez $v1, 0x1a1a30
    /* nop */                                                   // 0x001a1a48: nop 
    return;                                                     // 0x001a1a50: jr $ra
    sp = sp + 0x10;                                             // 0x001a1a54: addiu $sp, $sp, 0x10
}