void func_001ba060() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1c, local_1f;
    
    return func_001ba060();  // Tail call                        // 0x001ba060: j 0x1ba010
    /* nop */                                                   // 0x001ba068: nop 
    /* nop */                                                   // 0x001ba06c: nop 
    v1 = a0 << 1;                                               // 0x001ba070: sll $v1, $a0, 1
    sp = sp + -0x20;                                            // 0x001ba074: addiu $sp, $sp, -0x20
    a0 = v1 + a0;                                               // 0x001ba078: addu $a0, $v1, $a0
    v1 = 0x2a << 16;                                            // 0x001ba080: lui $v1, 0x2a
    a0 = a0 << 3;                                               // 0x001ba084: sll $a0, $a0, 3
    v1 = v1 + 0xf20;                                            // 0x001ba088: addiu $v1, $v1, 0xf20
    t1 = v1 + a0;                                               // 0x001ba08c: addu $t1, $v1, $a0
    v1 = *(int32_t*)((t1) + 0x10);                              // 0x001ba090: lw $v1, 0x10($t1)
    if (v1 == 0) goto label_0x1ba0e4;                           // 0x001ba094: beqz $v1, 0x1ba0e4
    /* nop */                                                   // 0x001ba098: nop 
    v1 = *(uint8_t*)(t1);                                       // 0x001ba09c: lbu $v1, 0($t1)
    a0 = 1;                                                     // 0x001ba0a0: addiu $a0, $zero, 1
    if (v1 != a0) goto label_0x1ba0e4;                          // 0x001ba0a4: bne $v1, $a0, 0x1ba0e4
    /* nop */                                                   // 0x001ba0a8: nop 
    v0 = 3;                                                     // 0x001ba0ac: addiu $v0, $zero, 3
    a2 = sp + 0x1f;                                             // 0x001ba0b0: addiu $a2, $sp, 0x1f
    local_1f = v0;                                              // 0x001ba0b4: sb $v0, 0x1f($sp)
    a3 = 2;                                                     // 0x001ba0b8: addiu $a3, $zero, 2
    v1 = *(uint8_t*)((a1) + 1);                                 // 0x001ba0bc: lbu $v1, 1($a1)
    v0 = *(uint8_t*)(a1);                                       // 0x001ba0c0: lbu $v0, 0($a1)
    v1 = v1 << 1;                                               // 0x001ba0c4: sll $v1, $v1, 1
    v0 = v0 & 1;                                                // 0x001ba0c8: andi $v0, $v0, 1
    v0 = v1 | v0;                                               // 0x001ba0d0: or $v0, $v1, $v0
    local_1c = v0;                                              // 0x001ba0d4: sh $v0, 0x1c($sp)
    a0 = *(uint8_t*)((t1) + 6);                                 // 0x001ba0d8: lbu $a0, 6($t1)
    func_00189860();  // 0x189770                                // 0x001ba0dc: jal 0x189770
    t0 = sp + 0x1c;                                             // 0x001ba0e0: addiu $t0, $sp, 0x1c
label_0x1ba0e4:
    return;                                                     // 0x001ba0e8: jr $ra
    sp = sp + 0x20;                                             // 0x001ba0ec: addiu $sp, $sp, 0x20
}