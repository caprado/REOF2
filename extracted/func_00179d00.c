void func_00179d00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00179d00: addiu $sp, $sp, -0x30
    s0 = a1 & 0xff;                                             // 0x00179d08: andi $s0, $a1, 0xff
    func_00179a18();  // 179a18                                // 0x00179d24: jal 0x179a18
    if (s1 == 0) goto label_0x179d8c;                           // 0x00179d30: beqz $s1, 0x179d8c
    func_0017a298();  // 17a298                                // 0x00179d38: jal 0x17a298
    /* nop */                                                   // 0x00179d3c: nop 
    v1 = 0xe0;                                                  // 0x00179d40: addiu $v1, $zero, 0xe0
    if (v0 != v1) goto label_0x179d8c;                          // 0x00179d44: bne $v0, $v1, 0x179d8c
    a1 = s1 + 0x1c;                                             // 0x00179d4c: addiu $a1, $s1, 0x1c
    v0 = 1;                                                     // 0x00179d50: addiu $v0, $zero, 1
    a0 = *(uint8_t*)(a1);                                       // 0x00179d54: lbu $a0, 0($a1)
    *(uint32_t*)(s2) = a0;                                      // 0x00179d58: sw $a0, 0($s2)
    a0 = a0 << 4;                                               // 0x00179d5c: sll $a0, $a0, 4
    v1 = *(uint8_t*)((a1) + 1);                                 // 0x00179d60: lbu $v1, 1($a1)
    v1 = (unsigned)v1 >> 4;                                     // 0x00179d64: srl $v1, $v1, 4
    a0 = a0 | v1;                                               // 0x00179d68: or $a0, $a0, $v1
    *(uint32_t*)(s2) = a0;                                      // 0x00179d6c: sw $a0, 0($s2)
    v1 = *(uint8_t*)((a1) + 1);                                 // 0x00179d70: lbu $v1, 1($a1)
    *(uint32_t*)(s3) = v1;                                      // 0x00179d74: sw $v1, 0($s3)
    v1 = v1 << 8;                                               // 0x00179d78: sll $v1, $v1, 8
    a0 = *(uint8_t*)((a1) + 2);                                 // 0x00179d7c: lbu $a0, 2($a1)
    v1 = v1 | a0;                                               // 0x00179d80: or $v1, $v1, $a0
    v1 = v1 & 0xfff;                                            // 0x00179d84: andi $v1, $v1, 0xfff
    *(uint32_t*)(s3) = v1;                                      // 0x00179d88: sw $v1, 0($s3)
label_0x179d8c:
    return;                                                     // 0x00179da0: jr $ra
    sp = sp + 0x30;                                             // 0x00179da4: addiu $sp, $sp, 0x30
}