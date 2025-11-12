void func_001d8cc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d8cc0: addiu $sp, $sp, -0x10
    v0 = *(uint16_t*)((a0) + 0xbc8);                            // 0x001d8cc8: lhu $v0, 0xbc8($a0)
    if (v0 == 0) goto label_0x1d8d28;                           // 0x001d8ccc: beqz $v0, 0x1d8d28
    /* nop */                                                   // 0x001d8cd0: nop 
    v1 = *(uint8_t*)((a0) + 0x549);                             // 0x001d8cd4: lbu $v1, 0x549($a0)
    v0 = v0 + -1;                                               // 0x001d8cd8: addiu $v0, $v0, -1
    a2 = v0 | 0x8000;                                           // 0x001d8cdc: ori $a2, $v0, 0x8000
    v0 = 1;                                                     // 0x001d8ce0: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1d8d0c;                          // 0x001d8ce4: bne $v1, $v0, 0x1d8d0c
    /* nop */                                                   // 0x001d8ce8: nop 
    v0 = *(uint8_t*)((a0) + 3);                                 // 0x001d8cec: lbu $v0, 3($a0)
    v1 = a1 & 0xff;                                             // 0x001d8cf0: andi $v1, $a1, 0xff
    v0 = v0 << 3;                                               // 0x001d8cf4: sll $v0, $v0, 3
    func_001d4c80();  // 0x1d4ab0                                // 0x001d8cfc: jal 0x1d4ab0
    a1 = v0 + 0x1100;                                           // 0x001d8d00: addiu $a1, $v0, 0x1100
    goto label_0x1d8d78;                                        // 0x001d8d04: b 0x1d8d78
label_0x1d8d0c:
    v0 = *(uint8_t*)((a0) + 3);                                 // 0x001d8d0c: lbu $v0, 3($a0)
    v0 = v0 << 3;                                               // 0x001d8d10: sll $v0, $v0, 3
    func_001d4c80();  // 0x1d4ab0                                // 0x001d8d18: jal 0x1d4ab0
    a1 = v0 + 0x1000;                                           // 0x001d8d1c: addiu $a1, $v0, 0x1000
    goto label_0x1d8d74;                                        // 0x001d8d20: b 0x1d8d74
    /* nop */                                                   // 0x001d8d24: nop 
label_0x1d8d28:
    v1 = *(uint8_t*)((a0) + 0x549);                             // 0x001d8d28: lbu $v1, 0x549($a0)
    v0 = 1;                                                     // 0x001d8d2c: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1d8d58;                          // 0x001d8d30: bne $v1, $v0, 0x1d8d58
    v0 = a2 & 0xff;                                             // 0x001d8d34: andi $v0, $a2, 0xff
    v0 = *(uint8_t*)((a0) + 3);                                 // 0x001d8d38: lbu $v0, 3($a0)
    v1 = a1 & 0xff;                                             // 0x001d8d3c: andi $v1, $a1, 0xff
    v0 = v0 << 3;                                               // 0x001d8d40: sll $v0, $v0, 3
    func_001d4c80();  // 0x1d4ab0                                // 0x001d8d48: jal 0x1d4ab0
    a1 = v0 + 0x1100;                                           // 0x001d8d4c: addiu $a1, $v0, 0x1100
    goto label_0x1d8d74;                                        // 0x001d8d50: b 0x1d8d74
    /* nop */                                                   // 0x001d8d54: nop 
label_0x1d8d58:
    v1 = a1 & 0xff;                                             // 0x001d8d58: andi $v1, $a1, 0xff
    a1 = v0 << 0x10;                                            // 0x001d8d5c: sll $a1, $v0, 0x10
    v0 = *(uint8_t*)((a0) + 3);                                 // 0x001d8d60: lbu $v0, 3($a0)
    a0 = a1 | v1;                                               // 0x001d8d64: or $a0, $a1, $v1
    v0 = v0 << 3;                                               // 0x001d8d68: sll $v0, $v0, 3
    func_001d4c80();  // 0x1d4ab0                                // 0x001d8d6c: jal 0x1d4ab0
    a1 = v0 + 0x1000;                                           // 0x001d8d70: addiu $a1, $v0, 0x1000
label_0x1d8d74:
label_0x1d8d78:
    return;                                                     // 0x001d8d78: jr $ra
    sp = sp + 0x10;                                             // 0x001d8d7c: addiu $sp, $sp, 0x10
}