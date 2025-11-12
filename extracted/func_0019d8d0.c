void func_0019d8d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x20);                              // 0x0019d8d0: lw $v1, 0x20($a0)
    v0 = 0x14;                                                  // 0x0019d8d4: addiu $v0, $zero, 0x14
    if (v1 == v0) goto label_0x19d93c;                          // 0x0019d8d8: beq $v1, $v0, 0x19d93c
    v0 = 0x13;                                                  // 0x0019d8dc: addiu $v0, $zero, 0x13
    if (v1 == v0) goto label_0x19d930;                          // 0x0019d8e0: beq $v1, $v0, 0x19d930
    /* nop */                                                   // 0x0019d8e4: nop 
    v0 = 0xa;                                                   // 0x0019d8e8: addiu $v0, $zero, 0xa
    if (v1 == v0) goto label_0x19d924;                          // 0x0019d8ec: beq $v1, $v0, 0x19d924
    v0 = 2;                                                     // 0x0019d8f0: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x19d924;                          // 0x0019d8f4: beq $v1, $v0, 0x19d924
    /* nop */                                                   // 0x0019d8f8: nop 
    v0 = 1;                                                     // 0x0019d8fc: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x19d918;                          // 0x0019d900: beq $v1, $v0, 0x19d918
    /* nop */                                                   // 0x0019d904: nop 
    if (v1 == 0) goto label_0x19d918;                           // 0x0019d908: beqz $v1, 0x19d918
    /* nop */                                                   // 0x0019d90c: nop 
    goto label_0x19d948;                                        // 0x0019d910: b 0x19d948
label_0x19d918:
    a2 = 0x40;                                                  // 0x0019d918: addiu $a2, $zero, 0x40
    goto label_0x19d944;                                        // 0x0019d91c: b 0x19d944
    a1 = 0x20;                                                  // 0x0019d920: addiu $a1, $zero, 0x20
label_0x19d924:
    a2 = 0x40;                                                  // 0x0019d924: addiu $a2, $zero, 0x40
    goto label_0x19d944;                                        // 0x0019d928: b 0x19d944
label_0x19d930:
    a2 = 0x80;                                                  // 0x0019d930: addiu $a2, $zero, 0x80
    goto label_0x19d944;                                        // 0x0019d934: b 0x19d944
    a1 = 0x40;                                                  // 0x0019d938: addiu $a1, $zero, 0x40
label_0x19d93c:
    a2 = 0x80;                                                  // 0x0019d93c: addiu $a2, $zero, 0x80
label_0x19d944:
label_0x19d948:
    t2 = *(int16_t*)((a0) + 0x1a);                              // 0x0019d94c: lh $t2, 0x1a($a0)
    t1 = *(int16_t*)((a0) + 0x1c);                              // 0x0019d954: lh $t1, 0x1c($a0)
    a1 = *(int32_t*)((a0) + 0x30);                              // 0x0019d95c: lw $a1, 0x30($a0)
    goto label_0x19d9dc;                                        // 0x0019d964: b 0x19d9dc
label_0x19d96c:
    a0 = a0 + a2;                                               // 0x0019d978: addu $a0, $a0, $a2
    v1 = v1 + a3;                                               // 0x0019d97c: addu $v1, $v1, $a3
    a0 = a0 + -1;                                               // 0x0019d980: addiu $a0, $a0, -1
    v1 = v1 + -1;                                               // 0x0019d984: addiu $v1, $v1, -1
    /* divide: a0 / a2 -> hi:lo */                              // 0x0019d988: div $zero, $a0, $a2
    t0 = t0 + 1;                                                // 0x0019d98c: addiu $t0, $t0, 1
    /* nop */                                                   // 0x0019d990: nop 
    /* mflo $a0 */                                              // 0x0019d994
    /* nop */                                                   // 0x0019d99c: nop 
    /* nop */                                                   // 0x0019d9a0: nop 
    v1 = t2 >> 1;                                               // 0x0019d9ac: sra $v1, $t2, 1
    v1 = t1 >> 1;                                               // 0x0019d9b4: sra $v1, $t1, 1
    v1 = a0 << 5;                                               // 0x0019d9c0: sll $v1, $a0, 5
    v0 = v0 + v1;                                               // 0x0019d9d0: addu $v0, $v0, $v1
label_0x19d9dc:
    v1 = ((unsigned)t0 < (unsigned)a1) ? 1 : 0;                 // 0x0019d9dc: sltu $v1, $t0, $a1
    if (v1 != 0) goto label_0x19d96c;                           // 0x0019d9e0: bnez $v1, 0x19d96c
    return;                                                     // 0x0019d9e8: jr $ra
    /* nop */                                                   // 0x0019d9ec: nop 
}