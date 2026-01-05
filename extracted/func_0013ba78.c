void func_0013ba78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013ba78: addiu $sp, $sp, -0x10
    func_0010ae00();  // 10ae00                                // 0x0013ba84: jal 0x10ae00
    v0 = 0x10;                                                  // 0x0013ba90: addiu $v0, $zero, 0x10
    v1 = ((unsigned)a2 < (unsigned)0x11) ? 1 : 0;               // 0x0013ba94: sltiu $v1, $a2, 0x11
    if (v1 == 0) a2 = v0;                                       // 0x0013ba98: movz $a2, $v0, $v1
    if (a2 == 0) goto label_0x13bad4;                           // 0x0013ba9c: beqz $a2, 0x13bad4
    a3 = 0x3a;                                                  // 0x0013baa4: addiu $a3, $zero, 0x3a
    v0 = s0 + a1;                                               // 0x0013baa8: addu $v0, $s0, $a1
    /* nop */                                                   // 0x0013baac: nop 
label_0x13bab0:
    a1 = a1 + 1;                                                // 0x0013bab0: addiu $a1, $a1, 1
    v1 = *(int8_t*)(v0);                                        // 0x0013bab4: lb $v1, 0($v0)
    v0 = 1;                                                     // 0x0013bab8: addiu $v0, $zero, 1
    if (v1 == a3) goto label_0x13bad8;                          // 0x0013babc: beq $v1, $a3, 0x13bad8
    a0 = ((unsigned)a1 < (unsigned)a2) ? 1 : 0;                 // 0x0013bac0: sltu $a0, $a1, $a2
    /* nop */                                                   // 0x0013bac4: nop 
    /* nop */                                                   // 0x0013bac8: nop 
    if (a0 != 0) goto label_0x13bab0;                           // 0x0013bacc: bnez $a0, 0x13bab0
    v0 = s0 + a1;                                               // 0x0013bad0: addu $v0, $s0, $a1
label_0x13bad4:
label_0x13bad8:
    return;                                                     // 0x0013bae0: jr $ra
    sp = sp + 0x10;                                             // 0x0013bae4: addiu $sp, $sp, 0x10
}