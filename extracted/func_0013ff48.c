void func_0013ff48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013ff48: addiu $sp, $sp, -0x10
    v0 = ((unsigned)a1 < (unsigned)4) ? 1 : 0;                  // 0x0013ff4c: sltiu $v0, $a1, 4
    if (v0 != 0) goto label_0x13ff78;                           // 0x0013ff50: bnez $v0, 0x13ff78
    v0 = *(int32_t*)((a0) + 0x28);                              // 0x0013ff58: lw $v0, 0x28($a0)
    /* beqzl $v0, 0x13ffb0 */                                   // 0x0013ff5c: beqzl $v0, 0x13ffb0
    a0 = *(int32_t*)((a0) + 0x2c);                              // 0x0013ff64: lw $a0, 0x2c($a0)
    /* call function at address in v0 */                        // 0x0013ff68: jalr $v0
    a1 = -3;                                                    // 0x0013ff6c: addiu $a1, $zero, -3
    goto label_0x13ffb0;                                        // 0x0013ff70: b 0x13ffb0
label_0x13ff78:
    v0 = a1 << 2;                                               // 0x0013ff78: sll $v0, $a1, 2
    v0 = v0 + a0;                                               // 0x0013ff7c: addu $v0, $v0, $a0
    a0 = *(int32_t*)((v0) + 0x18);                              // 0x0013ff80: lw $a0, 0x18($v0)
    if (a0 == 0) goto label_0x13ffac;                           // 0x0013ff84: beqz $a0, 0x13ffac
    /* nop */                                                   // 0x0013ff8c: nop 
label_0x13ff90:
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x0013ff90: lw $v0, 0xc($a0)
    a0 = *(int32_t*)(a0);                                       // 0x0013ff94: lw $a0, 0($a0)
    /* nop */                                                   // 0x0013ff98: nop 
    /* nop */                                                   // 0x0013ff9c: nop 
    /* nop */                                                   // 0x0013ffa0: nop 
    if (a0 != 0) goto label_0x13ff90;                           // 0x0013ffa4: bnez $a0, 0x13ff90
    v1 = v1 + v0;                                               // 0x0013ffa8: addu $v1, $v1, $v0
label_0x13ffac:
label_0x13ffb0:
    return;                                                     // 0x0013ffb4: jr $ra
    sp = sp + 0x10;                                             // 0x0013ffb8: addiu $sp, $sp, 0x10
}