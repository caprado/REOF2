void func_0015fcb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015fcb0: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0015fcc4: jal 0x15fc80
    v1 = s0 << 5;                                               // 0x0015fccc: sll $v1, $s0, 5
    a0 = 0x22 << 16;                                            // 0x0015fcd0: lui $a0, 0x22
    v1 = v1 - s0;                                               // 0x0015fcd4: subu $v1, $v1, $s0
    a0 = &str_00227d68;  // "W2004 mwSfdGetStat: handle is invalid" // 0x0015fcd8: addiu $a0, $a0, 0x7d68
    a1 = 0x36;                                                  // 0x0015fcdc: addiu $a1, $zero, 0x36
    if (v0 != 0) goto label_0x15fd00;                           // 0x0015fce0: bnez $v0, 0x15fd00
    v1 = v1 << 2;                                               // 0x0015fce4: sll $v1, $v1, 2
    return func_001634a8();  // Tail call                        // 0x0015fcf4: j 0x163410
    sp = sp + 0x20;                                             // 0x0015fcf8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015fcfc: nop 
label_0x15fd00:
    a2 = v1 + s0;                                               // 0x0015fd00: addu $a2, $v1, $s0
    a2 = a2 << 3;                                               // 0x0015fd14: sll $a2, $a2, 3
    return func_0015fbd8();  // Tail call                        // 0x0015fd18: j 0x15fb78
    sp = sp + 0x20;                                             // 0x0015fd1c: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x0015fd20: addiu $sp, $sp, -0x10
    func_0015fc80();  // 15fc80                                // 0x0015fd2c: jal 0x15fc80
    a0 = -0xc;                                                  // 0x0015fd34: addiu $a0, $zero, -0xc
    if (v0 != 0) goto label_0x15fd60;                           // 0x0015fd38: bnez $v0, 0x15fd60
    v1 = 2;                                                     // 0x0015fd3c: addiu $v1, $zero, 2
    func_0015e7b0();  // 15e7b0                                // 0x0015fd40: jal 0x15e7b0
    /* nop */                                                   // 0x0015fd44: nop 
    a0 = 0x22 << 16;                                            // 0x0015fd48: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015fd4c: jal 0x163410
    a0 = &str_00227d98;  // "E1122626: mwPlySetSyncMode: handle is invalid." // 0x0015fd50: addiu $a0, $a0, 0x7d98
    goto label_0x15fd98;                                        // 0x0015fd54: b 0x15fd98
    /* nop */                                                   // 0x0015fd5c: nop 
label_0x15fd60:
    v0 = *(int32_t*)((s0) + 8);                                 // 0x0015fd60: lw $v0, 8($s0)
    if (v0 != v1) goto label_0x15fd9c;                          // 0x0015fd64: bnel $v0, $v1, 0x15fd9c
    func_00174fb8();  // 174fb8                                // 0x0015fd6c: jal 0x174fb8
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x0015fd70: lw $a0, 0x40($s0)
    a2 = 6;                                                     // 0x0015fd74: addiu $a2, $zero, 6
    a1 = 4;                                                     // 0x0015fd7c: addiu $a1, $zero, 4
    if (v1 == a1) goto label_0x15fd94;                          // 0x0015fd80: beq $v1, $a1, 0x15fd94
    a0 = (v1 < 0) ? 1 : 0;                                      // 0x0015fd84: slti $a0, $v1, 0
    v0 = 1;                                                     // 0x0015fd88: addiu $v0, $zero, 1
    if (v1 != a2) goto label_0x15fd98;                          // 0x0015fd8c: bne $v1, $a2, 0x15fd98
    if (a0 != 0) v0 = a1;                                       // 0x0015fd90: movn $v0, $a1, $a0
label_0x15fd94:
    v0 = 2;                                                     // 0x0015fd94: addiu $v0, $zero, 2
label_0x15fd98:
label_0x15fd9c:
    return;                                                     // 0x0015fda0: jr $ra
    sp = sp + 0x10;                                             // 0x0015fda4: addiu $sp, $sp, 0x10
}