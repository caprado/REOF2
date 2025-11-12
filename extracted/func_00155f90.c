void func_00155f90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a2 << 2;                                               // 0x00155f90: sll $v0, $a2, 2
    v1 = a2 & 0xf;                                              // 0x00155f94: andi $v1, $a2, 0xf
    if (v1 == 0) goto label_0x155fbc;                           // 0x00155f98: beqz $v1, 0x155fbc
    a0 = a0 + v0;                                               // 0x00155f9c: addu $a0, $a0, $v0
label_0x155fa0:
    a0 = a0 + -4;                                               // 0x00155fa0: addiu $a0, $a0, -4
    v1 = v1 + -1;                                               // 0x00155fa4: addiu $v1, $v1, -1
    /* nop */                                                   // 0x00155fa8: nop 
    /* nop */                                                   // 0x00155fac: nop 
    /* nop */                                                   // 0x00155fb0: nop 
    if (v1 != 0) goto label_0x155fa0;                           // 0x00155fb4: bnez $v1, 0x155fa0
    *(uint32_t*)(a0) = a1;                                      // 0x00155fb8: sw $a1, 0($a0)
label_0x155fbc:
    a2 = (unsigned)a2 >> 4;                                     // 0x00155fbc: srl $a2, $a2, 4
    if (a2 == 0) goto label_0x156050;                           // 0x00155fc0: beqz $a2, 0x156050
    /* nop */                                                   // 0x00155fc4: nop 
label_0x155fc8:
    a0 = a0 + -4;                                               // 0x00155fc8: addiu $a0, $a0, -4
    a2 = a2 + -1;                                               // 0x00155fcc: addiu $a2, $a2, -1
    *(uint32_t*)(a0) = a1;                                      // 0x00155fd0: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x00155fd4: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00155fd8: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x00155fdc: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00155fe0: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x00155fe4: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00155fe8: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x00155fec: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00155ff0: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x00155ff4: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00155ff8: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x00155ffc: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00156000: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x00156004: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00156008: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x0015600c: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00156010: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x00156014: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00156018: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x0015601c: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00156020: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x00156024: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00156028: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x0015602c: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00156030: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x00156034: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00156038: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x0015603c: addiu $a0, $a0, -4
    *(uint32_t*)(a0) = a1;                                      // 0x00156040: sw $a1, 0($a0)
    a0 = a0 + -4;                                               // 0x00156044: addiu $a0, $a0, -4
    if (a2 != 0) goto label_0x155fc8;                           // 0x00156048: bnez $a2, 0x155fc8
    *(uint32_t*)(a0) = a1;                                      // 0x0015604c: sw $a1, 0($a0)
label_0x156050:
    return;                                                     // 0x00156050: jr $ra
    /* nop */                                                   // 0x00156054: nop 
}