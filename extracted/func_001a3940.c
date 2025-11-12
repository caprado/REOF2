void func_001a3940() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a3940: addiu $sp, $sp, -0x10
    a1 = 0xc << 16;                                             // 0x001a3950: lui $a1, 0xc
    func_001a32e0();  // 0x1a3230                                // 0x001a3954: jal 0x1a3230
    if (v0 != 0) goto label_0x1a396c;                           // 0x001a395c: bnez $v0, 0x1a396c
    /* nop */                                                   // 0x001a3960: nop 
    goto label_0x1a39b8;                                        // 0x001a3964: b 0x1a39b8
label_0x1a396c:
    v0 = v0 + 0xc;                                              // 0x001a396c: addiu $v0, $v0, 0xc
    goto label_0x1a398c;                                        // 0x001a3970: b 0x1a398c
label_0x1a3978:
    v1 = *(int32_t*)(v0);                                       // 0x001a3978: lw $v1, 0($v0)
    a0 = a0 + 1;                                                // 0x001a397c: addiu $a0, $a0, 1
    v1 = v1 << 3;                                               // 0x001a3980: sll $v1, $v1, 3
    v0 = v0 + 4;                                                // 0x001a3984: addiu $v0, $v0, 4
    v0 = v0 + v1;                                               // 0x001a3988: addu $v0, $v0, $v1
label_0x1a398c:
    v1 = (a0 < t1) ? 1 : 0;                                     // 0x001a398c: slt $v1, $a0, $t1
    if (v1 != 0) goto label_0x1a3978;                           // 0x001a3990: bnez $v1, 0x1a3978
    /* nop */                                                   // 0x001a3994: nop 
    v1 = *(int32_t*)(v0);                                       // 0x001a3998: lw $v1, 0($v0)
    v1 = (t0 < v1) ? 1 : 0;                                     // 0x001a399c: slt $v1, $t0, $v1
    if (v1 != 0) goto label_0x1a39b0;                           // 0x001a39a0: bnez $v1, 0x1a39b0
    v1 = t0 << 3;                                               // 0x001a39a4: sll $v1, $t0, 3
    goto label_0x1a39b8;                                        // 0x001a39a8: b 0x1a39b8
label_0x1a39b0:
    v0 = v0 + 4;                                                // 0x001a39b0: addiu $v0, $v0, 4
    v0 = v0 + v1;                                               // 0x001a39b4: addu $v0, $v0, $v1
label_0x1a39b8:
    return;                                                     // 0x001a39bc: jr $ra
    sp = sp + 0x10;                                             // 0x001a39c0: addiu $sp, $sp, 0x10
}