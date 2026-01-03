void func_001c90c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c90c0: addiu $sp, $sp, -0x20
    a2 = s0 + 4;                                                // 0x001c90d8: addiu $a2, $s0, 4
    func_001c7b50();  // 1c7b50                                // 0x001c90dc: jal 0x1c7b50
    a3 = s0 + 6;                                                // 0x001c90e0: addiu $a3, $s0, 6
    func_001c8c80();  // 1c8c80                                // 0x001c90e8: jal 0x1c8c80
    if (v0 >= 0) goto label_0x1c9100;                           // 0x001c90f0: bgez $v0, 0x1c9100
    /* nop */                                                   // 0x001c90f4: nop 
    goto label_0x1c91e0;                                        // 0x001c90f8: b 0x1c91e0
    /* nop */                                                   // 0x001c90fc: nop 
label_0x1c9100:
    v1 = *(int16_t*)(s0);                                       // 0x001c9100: lh $v1, 0($s0)
    v1 = v1 + 1;                                                // 0x001c9104: addiu $v1, $v1, 1
    at = ((unsigned)v1 < (unsigned)0xc) ? 1 : 0;                // 0x001c9108: sltiu $at, $v1, 0xc
    if (at == 0) goto label_0x1c9198;                           // 0x001c910c: beqz $at, 0x1c9198
    a0 = 0x24 << 16;                                            // 0x001c9110: lui $a0, 0x24
    v1 = v1 << 2;                                               // 0x001c9114: sll $v1, $v1, 2
    a0 = a0 + 0x3860;                                           // 0x001c9118: addiu $a0, $a0, 0x3860
    v1 = v1 + a0;                                               // 0x001c911c: addu $v1, $v1, $a0
    v1 = *(int32_t*)(v1);                                       // 0x001c9120: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x001c9124: jr $v1
    /* nop */                                                   // 0x001c9128: nop 
    /* nop */                                                   // 0x001c912c: nop 
    goto label_0x1c91e0;                                        // 0x001c9130: b 0x1c91e0
    *(uint16_t*)(s0) = 0;                                       // 0x001c9134: sh $zero, 0($s0)
    v1 = 1;                                                     // 0x001c9138: addiu $v1, $zero, 1
    goto label_0x1c91e0;                                        // 0x001c913c: b 0x1c91e0
    *(uint16_t*)(s0) = v1;                                      // 0x001c9140: sh $v1, 0($s0)
    /* nop */                                                   // 0x001c9144: nop 
    v1 = 2;                                                     // 0x001c9148: addiu $v1, $zero, 2
    goto label_0x1c91e0;                                        // 0x001c914c: b 0x1c91e0
    *(uint16_t*)(s0) = v1;                                      // 0x001c9150: sh $v1, 0($s0)
    /* nop */                                                   // 0x001c9154: nop 
    v1 = 3;                                                     // 0x001c9158: addiu $v1, $zero, 3
    goto label_0x1c91e0;                                        // 0x001c915c: b 0x1c91e0
    *(uint16_t*)(s0) = v1;                                      // 0x001c9160: sh $v1, 0($s0)
    /* nop */                                                   // 0x001c9164: nop 
    v1 = 4;                                                     // 0x001c9168: addiu $v1, $zero, 4
    goto label_0x1c91e0;                                        // 0x001c916c: b 0x1c91e0
    *(uint16_t*)(s0) = v1;                                      // 0x001c9170: sh $v1, 0($s0)
    /* nop */                                                   // 0x001c9174: nop 
    v1 = 5;                                                     // 0x001c9178: addiu $v1, $zero, 5
    goto label_0x1c91e0;                                        // 0x001c917c: b 0x1c91e0
    *(uint16_t*)(s0) = v1;                                      // 0x001c9180: sh $v1, 0($s0)
    /* nop */                                                   // 0x001c9184: nop 
    v1 = 6;                                                     // 0x001c9188: addiu $v1, $zero, 6
    goto label_0x1c91e0;                                        // 0x001c918c: b 0x1c91e0
    *(uint16_t*)(s0) = v1;                                      // 0x001c9190: sh $v1, 0($s0)
    /* nop */                                                   // 0x001c9194: nop 
label_0x1c9198:
    v1 = 7;                                                     // 0x001c9198: addiu $v1, $zero, 7
    goto label_0x1c91e0;                                        // 0x001c919c: b 0x1c91e0
    *(uint16_t*)(s0) = v1;                                      // 0x001c91a0: sh $v1, 0($s0)
    /* nop */                                                   // 0x001c91a4: nop 
    v1 = 8;                                                     // 0x001c91a8: addiu $v1, $zero, 8
    goto label_0x1c91e0;                                        // 0x001c91ac: b 0x1c91e0
    *(uint16_t*)(s0) = v1;                                      // 0x001c91b0: sh $v1, 0($s0)
    /* nop */                                                   // 0x001c91b4: nop 
    v1 = 9;                                                     // 0x001c91b8: addiu $v1, $zero, 9
    goto label_0x1c91e0;                                        // 0x001c91bc: b 0x1c91e0
    *(uint16_t*)(s0) = v1;                                      // 0x001c91c0: sh $v1, 0($s0)
    /* nop */                                                   // 0x001c91c4: nop 
    v1 = 0xa;                                                   // 0x001c91c8: addiu $v1, $zero, 0xa
    goto label_0x1c91e0;                                        // 0x001c91cc: b 0x1c91e0
    *(uint16_t*)(s0) = v1;                                      // 0x001c91d0: sh $v1, 0($s0)
    /* nop */                                                   // 0x001c91d4: nop 
    v1 = 0xb;                                                   // 0x001c91d8: addiu $v1, $zero, 0xb
    *(uint16_t*)(s0) = v1;                                      // 0x001c91dc: sh $v1, 0($s0)
label_0x1c91e0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c91e4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c91e8: jr $ra
    sp = sp + 0x20;                                             // 0x001c91ec: addiu $sp, $sp, 0x20
}