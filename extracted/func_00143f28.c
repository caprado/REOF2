void func_00143f28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x18c);                             // 0x00143f28: lw $v1, 0x18c($a0)
    v0 = 3;                                                     // 0x00143f2c: addiu $v0, $zero, 3
    if (v1 != v0) return;  // Branch to 0x144048                // 0x00143f30: bne $v1, $v0, 0x144048
    /* nop */                                                   // 0x00143f34: nop 
    v0 = *(int32_t*)((a0) + 0x190);                             // 0x00143f38: lw $v0, 0x190($a0)
    /* beqzl $v0, 0x143fd0 */                                   // 0x00143f3c: beqzl $v0, 0x143fd0
    v0 = a3 << 1;                                               // 0x00143f40: sll $v0, $a3, 1
    if (a3 <= 0) goto label_0x143f58;                           // 0x00143f44: blez $a3, 0x143f58
    v1 = *(int32_t*)(a2);                                       // 0x00143f48: lw $v1, 0($a2)
    v0 = a3 + 1;                                                // 0x00143f4c: addiu $v0, $a3, 1
    goto label_0x143f5c;                                        // 0x00143f50: b 0x143f5c
    v0 = v0 >> 1;                                               // 0x00143f54: sra $v0, $v0, 1
label_0x143f58:
    v0 = a3 >> 1;                                               // 0x00143f58: sra $v0, $a3, 1
label_0x143f5c:
    v0 = v0 + v1;                                               // 0x00143f5c: addu $v0, $v0, $v1
    *(uint32_t*)(a1) = v0;                                      // 0x00143f60: sw $v0, 0($a1)
    if (t0 <= 0) goto label_0x143f78;                           // 0x00143f64: blez $t0, 0x143f78
    v1 = *(int32_t*)((a2) + 4);                                 // 0x00143f68: lw $v1, 4($a2)
    v0 = t0 + 1;                                                // 0x00143f6c: addiu $v0, $t0, 1
    goto label_0x143f7c;                                        // 0x00143f70: b 0x143f7c
    v0 = v0 >> 1;                                               // 0x00143f74: sra $v0, $v0, 1
label_0x143f78:
    v0 = t0 >> 1;                                               // 0x00143f78: sra $v0, $t0, 1
label_0x143f7c:
    v0 = v0 + v1;                                               // 0x00143f7c: addu $v0, $v0, $v1
    v0 = v0 + -1;                                               // 0x00143f80: addiu $v0, $v0, -1
    *(uint32_t*)((a1) + 4) = v0;                                // 0x00143f84: sw $v0, 4($a1)
    v0 = a3 << 1;                                               // 0x00143f88: sll $v0, $a3, 1
    v0 = v0 + a3;                                               // 0x00143f8c: addu $v0, $v0, $a3
    if (a3 <= 0) goto label_0x143f9c;                           // 0x00143f90: blez $a3, 0x143f9c
    v1 = *(int32_t*)(a2);                                       // 0x00143f94: lw $v1, 0($a2)
    v0 = v0 + 1;                                                // 0x00143f98: addiu $v0, $v0, 1
label_0x143f9c:
    v0 = v0 >> 1;                                               // 0x00143f9c: sra $v0, $v0, 1
    v0 = v0 + v1;                                               // 0x00143fa0: addu $v0, $v0, $v1
    *(uint32_t*)((a1) + 8) = v0;                                // 0x00143fa4: sw $v0, 8($a1)
    v0 = t0 << 1;                                               // 0x00143fa8: sll $v0, $t0, 1
    v0 = v0 + t0;                                               // 0x00143fac: addu $v0, $v0, $t0
    if (t0 <= 0) goto label_0x143fbc;                           // 0x00143fb0: blez $t0, 0x143fbc
    a2 = *(int32_t*)((a2) + 4);                                 // 0x00143fb4: lw $a2, 4($a2)
    v0 = v0 + 1;                                                // 0x00143fb8: addiu $v0, $v0, 1
label_0x143fbc:
    v0 = v0 >> 1;                                               // 0x00143fbc: sra $v0, $v0, 1
    v0 = v0 + a2;                                               // 0x00143fc0: addu $v0, $v0, $a2
    v0 = v0 + 1;                                                // 0x00143fc4: addiu $v0, $v0, 1
    return;                                                     // 0x00143fc8: jr $ra
    *(uint32_t*)((a1) + 0xc) = v0;                              // 0x00143fcc: sw $v0, 0xc($a1)
}