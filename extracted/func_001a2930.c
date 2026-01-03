void func_001a2930() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a2930: addiu $sp, $sp, -0x10
    func_001a28c0();  // 1a28c0                                // 0x001a2938: jal 0x1a28c0
    v1 = *(int32_t*)((v0) + 4);                                 // 0x001a2940: lw $v1, 4($v0)
    at = ((unsigned)a1 < (unsigned)v1) ? 1 : 0;                 // 0x001a2944: sltu $at, $a1, $v1
    if (at == 0) goto label_0x1a2994;                           // 0x001a2948: beqz $at, 0x1a2994
    /* nop */                                                   // 0x001a294c: nop 
    a0 = a0 + 0xc;                                              // 0x001a2950: addiu $a0, $a0, 0xc
    goto label_0x1a2988;                                        // 0x001a2954: b 0x1a2988
label_0x1a295c:
    v0 = *(uint8_t*)(a0);                                       // 0x001a295c: lbu $v0, 0($a0)
    if (v0 == 0) goto label_0x1a297c;                           // 0x001a2960: beqz $v0, 0x1a297c
    /* nop */                                                   // 0x001a2964: nop 
    if (a3 != a1) goto label_0x1a2978;                          // 0x001a2968: bne $a3, $a1, 0x1a2978
    goto label_0x1a299c;                                        // 0x001a2970: b 0x1a299c
label_0x1a2978:
    a3 = a3 + 1;                                                // 0x001a2978: addiu $a3, $a3, 1
label_0x1a297c:
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001a297c: lw $v0, 8($a0)
    a2 = a2 + 1;                                                // 0x001a2980: addiu $a2, $a2, 1
    a0 = a0 + v0;                                               // 0x001a2984: addu $a0, $a0, $v0
label_0x1a2988:
    v0 = ((unsigned)a2 < (unsigned)v1) ? 1 : 0;                 // 0x001a2988: sltu $v0, $a2, $v1
    if (v0 != 0) goto label_0x1a295c;                           // 0x001a298c: bnez $v0, 0x1a295c
    /* nop */                                                   // 0x001a2990: nop 
label_0x1a2994:
label_0x1a299c:
    return;                                                     // 0x001a299c: jr $ra
    sp = sp + 0x10;                                             // 0x001a29a0: addiu $sp, $sp, 0x10
}