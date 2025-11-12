void func_001bdf00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bdf00: addiu $sp, $sp, -0x20
    at = 0x31 << 16;                                            // 0x001bdf04: lui $at, 0x31
    v0 = 0x63;                                                  // 0x001bdf0c: addiu $v0, $zero, 0x63
    a0 = g_003138a0;  // Global at 0x003138a0                   // 0x001bdf14: lbu $a0, 0x38a0($at)
    s0 = 0x31 << 16;                                            // 0x001bdf18: lui $s0, 0x31
    if (a0 == v0) goto label_0x1be030;                          // 0x001bdf1c: beq $a0, $v0, 0x1be030
    s0 = s0 + 0x38a0;                                           // 0x001bdf20: addiu $s0, $s0, 0x38a0
    v0 = 4;                                                     // 0x001bdf24: addiu $v0, $zero, 4
    if (a0 == v0) goto label_0x1be028;                          // 0x001bdf28: beq $a0, $v0, 0x1be028
    v0 = 3;                                                     // 0x001bdf30: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x1bdfd8;                          // 0x001bdf34: beq $a0, $v0, 0x1bdfd8
    v1 = 2;                                                     // 0x001bdf38: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1bdfb0;                          // 0x001bdf3c: beq $a0, $v1, 0x1bdfb0
    v0 = 1;                                                     // 0x001bdf40: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x1be038;                          // 0x001bdf44: beq $a0, $v0, 0x1be038
    /* nop */                                                   // 0x001bdf48: nop 
    if (a0 == 0) goto label_0x1bdf5c;                           // 0x001bdf4c: beqz $a0, 0x1bdf5c
    at = 0x31 << 16;                                            // 0x001bdf50: lui $at, 0x31
    goto label_0x1be03c;                                        // 0x001bdf54: b 0x1be03c
    v0 = 1;                                                     // 0x001bdf58: addiu $v0, $zero, 1
label_0x1bdf5c:
    a0 = g_003138a8;  // Global at 0x003138a8                   // 0x001bdf5c: lw $a0, 0x38a8($at)
    if (a0 != v0) goto label_0x1bdf80;                          // 0x001bdf60: bne $a0, $v0, 0x1bdf80
    /* nop */                                                   // 0x001bdf64: nop 
    at = 0x31 << 16;                                            // 0x001bdf68: lui $at, 0x31
    v0 = g_003137b1;  // Global at 0x003137b1                   // 0x001bdf6c: lbu $v0, 0x37b1($at)
    if (v0 != v1) goto label_0x1bdf80;                          // 0x001bdf70: bne $v0, $v1, 0x1bdf80
    goto label_0x1be040;                                        // 0x001bdf78: b 0x1be040
label_0x1bdf80:
    if (a0 != 0) goto label_0x1bdfa8;                           // 0x001bdf80: bnez $a0, 0x1bdfa8
    v0 = 2;                                                     // 0x001bdf84: addiu $v0, $zero, 2
    at = 0x31 << 16;                                            // 0x001bdf88: lui $at, 0x31
    v0 = 3;                                                     // 0x001bdf8c: addiu $v0, $zero, 3
    v1 = g_003137b1;  // Global at 0x003137b1                   // 0x001bdf90: lbu $v1, 0x37b1($at)
    if (v1 != v0) goto label_0x1bdfa4;                          // 0x001bdf94: bne $v1, $v0, 0x1bdfa4
    goto label_0x1be03c;                                        // 0x001bdf9c: b 0x1be03c
    /* nop */                                                   // 0x001bdfa0: nop 
label_0x1bdfa4:
    v0 = 2;                                                     // 0x001bdfa4: addiu $v0, $zero, 2
label_0x1bdfa8:
    goto label_0x1be038;                                        // 0x001bdfa8: b 0x1be038
    g_003138a0 = v0;  // Global at 0x003138a0                   // 0x001bdfac: sb $v0, 0($s0)
label_0x1bdfb0:
    func_001adc60();  // 0x1adbe0                                // 0x001bdfb0: jal 0x1adbe0
    /* nop */                                                   // 0x001bdfb4: nop 
    func_0034d560();  // 0x34d560                               // 0x001bdfb8: jal 0x34d560
    /* nop */                                                   // 0x001bdfbc: nop 
    v0 = 0x14;                                                  // 0x001bdfc0: addiu $v0, $zero, 0x14
    g_003138a4 = v0;  // Global at 0x003138a4                   // 0x001bdfc4: sw $v0, 4($s0)
    v0 = g_003138a0;  // Global at 0x003138a0                   // 0x001bdfc8: lbu $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x001bdfcc: addiu $v0, $v0, 1
    goto label_0x1be038;                                        // 0x001bdfd0: b 0x1be038
    g_003138a0 = v0;  // Global at 0x003138a0                   // 0x001bdfd4: sb $v0, 0($s0)
label_0x1bdfd8:
    v0 = g_003138a4;  // Global at 0x003138a4                   // 0x001bdfd8: lw $v0, 4($s0)
    v0 = v0 + -1;                                               // 0x001bdfdc: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x1be038;                           // 0x001bdfe0: bnez $v0, 0x1be038
    g_003138a4 = v0;  // Global at 0x003138a4                   // 0x001bdfe4: sw $v0, 4($s0)
    at = 0x31 << 16;                                            // 0x001bdfe8: lui $at, 0x31
    func_001bdd00();  // 0x1bdc10                                // 0x001bdfec: jal 0x1bdc10
    a0 = g_003138a8;  // Global at 0x003138a8                   // 0x001bdff0: lw $a0, 0x38a8($at)
    at = 0x31 << 16;                                            // 0x001bdff4: lui $at, 0x31
    v1 = *(int32_t*)((gp) + -0x6328);                           // 0x001bdff8: lw $v1, -0x6328($gp)
    v0 = g_003138a8;  // Global at 0x003138a8                   // 0x001bdffc: lw $v0, 0x38a8($at)
    if (v1 == v0) goto label_0x1be014;                          // 0x001be000: beq $v1, $v0, 0x1be014
    v0 = 0x14;                                                  // 0x001be004: addiu $v0, $zero, 0x14
    v0 = 0x63;                                                  // 0x001be008: addiu $v0, $zero, 0x63
    goto label_0x1be038;                                        // 0x001be00c: b 0x1be038
    g_003138a0 = v0;  // Global at 0x003138a0                   // 0x001be010: sb $v0, 0($s0)
label_0x1be014:
    g_003138a4 = v0;  // Global at 0x003138a4                   // 0x001be014: sw $v0, 4($s0)
    v0 = g_003138a0;  // Global at 0x003138a0                   // 0x001be018: lbu $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x001be01c: addiu $v0, $v0, 1
    goto label_0x1be038;                                        // 0x001be020: b 0x1be038
    g_003138a0 = v0;  // Global at 0x003138a0                   // 0x001be024: sb $v0, 0($s0)
label_0x1be028:
    goto label_0x1be03c;                                        // 0x001be028: b 0x1be03c
    /* nop */                                                   // 0x001be02c: nop 
label_0x1be030:
    goto label_0x1be03c;                                        // 0x001be030: b 0x1be03c
    v0 = -1;                                                    // 0x001be034: addiu $v0, $zero, -1
label_0x1be038:
    v0 = 1;                                                     // 0x001be038: addiu $v0, $zero, 1
label_0x1be03c:
label_0x1be040:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001be040: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001be044: jr $ra
    sp = sp + 0x20;                                             // 0x001be048: addiu $sp, $sp, 0x20
}