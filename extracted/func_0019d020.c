void func_0019d020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_2c;
    
    sp = sp + -0x30;                                            // 0x0019d020: addiu $sp, $sp, -0x30
    v0 = 0x28 << 16;                                            // 0x0019d024: lui $v0, 0x28
    v1 = 0xffff << 16;                                          // 0x0019d02c: lui $v1, 0xffff
    v0 = v0 + 0x5480;                                           // 0x0019d034: addiu $v0, $v0, 0x5480
    local_2c = a0;                                              // 0x0019d038: sw $a0, 0x2c($sp)
    a0 = local_2c;                                              // 0x0019d03c: lw $a0, 0x2c($sp)
    v1 = a0 & v1;                                               // 0x0019d040: and $v1, $a0, $v1
    v1 = (unsigned)v1 >> 0x10;                                  // 0x0019d044: srl $v1, $v1, 0x10
    a0 = v1 + -1;                                               // 0x0019d048: addiu $a0, $v1, -1
    v1 = a0 << 3;                                               // 0x0019d04c: sll $v1, $a0, 3
    v1 = v1 - a0;                                               // 0x0019d050: subu $v1, $v1, $a0
    v1 = v1 << 3;                                               // 0x0019d054: sll $v1, $v1, 3
    s0 = v0 + v1;                                               // 0x0019d058: addu $s0, $v0, $v1
label_0x19d05c:
    v0 = 3;                                                     // 0x0019d05c: addiu $v0, $zero, 3
    if (a1 == v0) goto label_0x19d09c;                          // 0x0019d060: beq $a1, $v0, 0x19d09c
    a0 = sp + 0x2c;                                             // 0x0019d064: addiu $a0, $sp, 0x2c
    v0 = 2;                                                     // 0x0019d068: addiu $v0, $zero, 2
    if (a1 == v0) goto label_0x19d098;                          // 0x0019d06c: beq $a1, $v0, 0x19d098
    /* nop */                                                   // 0x0019d070: nop 
    v0 = 5;                                                     // 0x0019d074: addiu $v0, $zero, 5
    if (a1 == v0) goto label_0x19d098;                          // 0x0019d078: beq $a1, $v0, 0x19d098
    /* nop */                                                   // 0x0019d07c: nop 
    v0 = 4;                                                     // 0x0019d080: addiu $v0, $zero, 4
    if (a1 == v0) goto label_0x19d104;                          // 0x0019d084: beq $a1, $v0, 0x19d104
    /* nop */                                                   // 0x0019d088: nop 
    v0 = 1;                                                     // 0x0019d08c: addiu $v0, $zero, 1
    if (a1 == v0) goto label_0x19d104;                          // 0x0019d090: beq $a1, $v0, 0x19d104
    /* nop */                                                   // 0x0019d094: nop 
label_0x19d098:
    a0 = sp + 0x2c;                                             // 0x0019d098: addiu $a0, $sp, 0x2c
label_0x19d09c:
    func_0019ec00();  // 19ec00                                // 0x0019d09c: jal 0x19ec00
    a1 = 1;                                                     // 0x0019d0a0: addiu $a1, $zero, 1
    if (v0 != 0) goto label_0x19d0bc;                           // 0x0019d0a4: bnez $v0, 0x19d0bc
    a1 = 4;                                                     // 0x0019d0ac: addiu $a1, $zero, 4
    goto label_0x19d05c;                                        // 0x0019d0b0: b 0x19d05c
    *(uint32_t*)(s0) = a1;                                      // 0x0019d0b4: sw $a1, 0($s0)
label_0x19d0bc:
    func_0019cb80();  // 19cb80                                // 0x0019d0bc: jal 0x19cb80
    /* nop */                                                   // 0x0019d0c0: nop 
    func_0018c750();  // 18c750                                // 0x0019d0c4: jal 0x18c750
    a0 = *(int32_t*)((s0) + 8);                                 // 0x0019d0c8: lw $a0, 8($s0)
    func_0018dc30();  // 18dc30                                // 0x0019d0d0: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019d0d4: addiu $a1, $zero, 0x10
    a1 = 1;                                                     // 0x0019d0dc: addiu $a1, $zero, 1
    func_0018cba0();  // 18cba0                                // 0x0019d0e0: jal 0x18cba0
    a3 = 0x29 << 16;                                            // 0x0019d0ec: lui $a3, 0x29
    func_0018ce40();  // 18ce40                                // 0x0019d0fc: jal 0x18ce40
    a3 = a3 + -0x350;                                           // 0x0019d100: addiu $a3, $a3, -0x350
label_0x19d104:
    v1 = *(int32_t*)((gp) + -0x6484);                           // 0x0019d104: lw $v1, -0x6484($gp)
    v0 = 1;                                                     // 0x0019d108: addiu $v0, $zero, 1
    v1 = v1 + 1;                                                // 0x0019d10c: addiu $v1, $v1, 1
    *(uint32_t*)((gp) + -0x6484) = v1;                          // 0x0019d110: sw $v1, -0x6484($gp)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019d118: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019d11c: jr $ra
    sp = sp + 0x30;                                             // 0x0019d120: addiu $sp, $sp, 0x30
}